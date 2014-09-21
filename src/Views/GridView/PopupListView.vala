// -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
/*-
 * Copyright (c) 2012 Noise Developers (http://launchpad.net/noise)
 *
 * This software is licensed under the GNU General Public License
 * (version 2 or later). See the COPYING file in this distribution.
 *
 * The Noise authors hereby grant permission for non-GPL compatible
 * GStreamer plugins to be used and distributed together with GStreamer
 * and Noise. This permission is above and beyond the permissions granted
 * by the GPL license by which Noise is covered. If you modify this code
 * you may extend this exception to your version of the code, but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version.
 *
 * Authored by: Victor Eduardo <victoreduardm@gmail.com>
 *              Scott Ringwelski <sgringwe@mtu.edu>
 */

#if USE_GRANITE_DECORATED_WINDOW
public class Noise.PopupListView : Granite.Widgets.DecoratedWindow {
#else
public class Noise.PopupListView : Window {
#endif

    public const int MIN_SIZE = 400;

    ViewWrapper view_wrapper;
    
    Gtk.Button new_cover;
    Gtk.Label album_label;
    Gtk.Label artist_label;
    Granite.Widgets.Rating rating;

    GenericList list_view;

    Gee.Collection<Media> media_list;

    public PopupListView (GridView grid_view) {
#if USE_GRANITE_DECORATED_WINDOW
        base ("", "album-list-view", "album-list-view");

        // Don't destroy the window
        this.delete_event.connect (hide_on_delete);

        // Hide titlebar (we want to set a title, but not showing it!)
        this.show_title = false;
        // We have to fullscreen it otherwise it's not shown on fullscreen mode
        fullscreen ();
#else
        window_position = Gtk.WindowPosition.CENTER_ON_PARENT;

        // window stuff
        decorated = false;
        has_resize_grip = false;
        resizable = false;

        // close button
        var close = new Gtk.Button ();
        get_style_context ().add_class ("album-list-view");
        close.get_style_context().add_class("close-button");
        close.set_image (Icons.render_image ("window-close-symbolic", Gtk.IconSize.MENU));
        close.hexpand = close.vexpand = false;
        close.halign = Gtk.Align.START;
        close.set_relief(Gtk.ReliefStyle.NONE);
        close.clicked.connect( () =>  { this.hide(); });

        /* Make window draggable */
        UI.make_window_draggable (this);
#endif

        this.view_wrapper = grid_view.parent_view_wrapper;
        
        set_transient_for (App.main_window);
        App.main_window.close_subwindows.connect (() => {this.hide_on_delete ();});
        destroy_with_parent = true;
        skip_taskbar_hint = true;

        // change cover button
        new_cover = new Gtk.Button.from_icon_name ("insert-image", Gtk.IconSize.MENU);
        new_cover.set_tooltip_text (_("Change album cover"));
        new_cover.hexpand = new_cover.vexpand = false;
        new_cover.halign = Gtk.Align.END;
        new_cover.set_relief(Gtk.ReliefStyle.NONE);
        new_cover.margin = 12;
        new_cover.clicked.connect( () => { this.set_new_cover(); });
        
        // album artist/album labels
        album_label = new Gtk.Label ("");
        artist_label = new Gtk.Label ("");

        // Apply special style: Level-2 header
        Granite.Widgets.Utils.apply_text_style_to_label (Granite.TextStyle.H2, album_label);

        album_label.ellipsize = Pango.EllipsizeMode.END;
        artist_label.ellipsize = Pango.EllipsizeMode.END;

        album_label.set_line_wrap (false);
        artist_label.set_line_wrap (false);
        
        album_label.set_max_width_chars (30);
        artist_label.set_max_width_chars (30);

        album_label.margin_left = album_label.margin_right = 12;
        artist_label.margin_bottom = 12;

        // Music List
        var tvs = new TreeViewSetup (ListColumn.ARTIST, Gtk.SortType.ASCENDING, ViewWrapper.Hint.ALBUM_LIST);
        list_view = new MusicListView (view_wrapper, tvs);
        list_view.set_search_func (view_search_func);

        list_view.expand = true;
        
        var list_view_scrolled = new Gtk.ScrolledWindow (null, null);
        list_view_scrolled.add (list_view);

        // Rating widget
        rating = new Granite.Widgets.Rating (true, Gtk.IconSize.MENU, true);
        // customize rating
        rating.star_spacing = 16;
        rating.margin_top = 16;

        // Change Cover
        

        // Add everything
        var vbox = new Gtk.Box(Gtk.Orientation.VERTICAL, 0);
#if !USE_GRANITE_DECORATED_WINDOW
        vbox.pack_start (close, false, false, 0);
#endif        
        vbox.pack_start (album_label, false, true, 0);
        vbox.pack_start (artist_label, false, true, 0);
        vbox.pack_start (list_view_scrolled, true, true, 0);
        vbox.pack_start (rating, false, true, 0);
        vbox.pack_start (new_cover, false, false, 0);
        
        add(vbox);

        rating.rating_changed.connect(rating_changed);
    }

    /**
     * Resets the window
     */
    public void reset () {
        // clear labels
        set_title ("");
        album_label.set_label ("");
        artist_label.set_label ("");

        // clear treeview and media list
        list_view.get_selection ().unselect_all (); // Unselect rows
        media_list = new Gee.LinkedList<Media> ();
        list_view.set_media (media_list);

        // Reset size request
        set_size (MIN_SIZE);
    }

    public void set_parent_wrapper (ViewWrapper parent_wrapper) {
        this.view_wrapper = parent_wrapper;
        this.list_view.set_parent_wrapper (parent_wrapper);
    }

    public void set_album (Album album) {
        reset ();

        lock(media_list) {

            string name = album.get_display_name ();
            string artist = album.get_display_artist ();

            string title_format = C_("Title format used on Album View Popup: $ALBUM by $ARTIST", "%s by %s");
            set_title (title_format.printf (name, artist));
            
            album_label.set_label (name);
            artist_label.set_label (artist);
            
            // Make a copy. Otherwise the list won't work if some elements are
            // removed from the parent wrapper while the window is showing
            foreach (var m in album.get_media ()) {
                media_list.add (m);
            }

            list_view.set_media (media_list);

            // Search again to match the view wrapper's search
            list_view.do_search (App.main_window.searchField.text);

        }

        if (list_view.get_realized ())
            list_view.columns_autosize ();

        // Set rating
        update_album_rating ();
        view_wrapper.library.media_updated.connect (update_album_rating);
    }

    void update_album_rating () {
        // We don't want to set the overall_rating as each media's rating.
        // See rating_changed() in case you want to figure out what would happen.
        rating.rating_changed.disconnect(rating_changed);

        // Use average rating for the album
        int total_rating = 0, n_media = 0;
        foreach (var media in media_list) {
            if (media == null)
                continue;
            n_media ++;
            total_rating += (int)media.rating;
        }

        float average_rating = (float)total_rating / (float)n_media;

        // fix approximation and set new rating
        rating.rating = (int) GLib.Math.roundf (average_rating);

        // connect again ...
        rating.rating_changed.connect (rating_changed);
    }

    void rating_changed (int new_rating) {
        var updated = new Gee.LinkedList<Media> ();
        lock(media_list) {

            foreach (var media in media_list) {
                if (media == null)
                    continue;

                media.rating = (uint)new_rating;
                updated.add (media);
            }

        }

        view_wrapper.library.update_medias (updated, false, true);
    }

    private void view_search_func (string search, HashTable<int, Object> table, ref HashTable<int, Object> showing) {
        int parsed_rating;
        string parsed_search_string;

        String.base_search_method (search, out parsed_rating, out parsed_search_string);

        bool rating_search = parsed_rating > 0;

        // If an external refiltering is going on, we cannot obey the column browser filter
        // because it wil be refreshed after this search based on the new 'showing' table
        // (populated by this method).
        int show_index = 0;
        for (int i = 0; i < table.size (); ++i) {
            var m = table.get (i) as Media;
            if (m != null) {
                if (rating_search) {
                    if (m.rating == (uint) parsed_rating)
                        showing.set (show_index++, m);
                } else if (Search.match_string_to_media (m, parsed_search_string)) {
                    showing.set (show_index++, m);
                }
            }
        }
    }
    
    private void set_new_cover()
    {
        var file = new Gtk.FileChooserDialog (_("Open"), this, Gtk.FileChooserAction.OPEN,
            _("_Cancel"), Gtk.ResponseType.CANCEL, _("_Open"), Gtk.ResponseType.ACCEPT);

        var image_filter = new Gtk.FileFilter ();
        image_filter.set_filter_name (_("Image files"));
        image_filter.add_mime_type ("image/*");

        file.add_filter (image_filter);

        if (file.run () == Gtk.ResponseType.ACCEPT) {
            debug (file.get_uri ());
            var medias_to_discover = new Gee.LinkedList<Media> ();
            medias_to_discover.add_all (media_list);
            App.main_window.library_manager.fo.cover_importer.import_custom_file (medias_to_discover.first (), file.get_filename ());
        }
        
        file.destroy ();
    }

    /**
     * Force squared layout
     */
    public void set_size (int size) {
        this.set_size_request (size, -1);
        queue_resize ();
    }

    public override Gtk.SizeRequestMode get_request_mode () {
        return Gtk.SizeRequestMode.HEIGHT_FOR_WIDTH;
    }

    public override void get_preferred_height_for_width (int width,
                                                         out int minimum_height,
                                                         out int natural_height)
    {
        minimum_height = natural_height = width;
    }
}