/*-
 * Copyright (c) 2011       Scott Ringwelski <sgringwe@mtu.edu>
 *
 * Originally Written by Scott Ringwelski for BeatBox Music Player
 * BeatBox Music Player: http://www.launchpad.net/beat-box
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

using Gtk;
using Gee;

public class BeatBox.InfoPanel : ScrolledWindow {
	private LibraryManager lm;
	private LibraryWindow lw;
	private int id; // need this for when rating the media
	
	private Label title;
	private Label artist;
	private Button loveMedia;
	private Button banMedia;
	private ScrolledWindow artistImageScroll;
	private Gtk.Image artistImage;
	private RatingWidget rating; // need to make custom widget in future
	private Label album;
	private Label year;
	private SimilarMediasView ssv;
	
	public InfoPanel(LibraryManager lmm, LibraryWindow lww) {
		lm = lmm;
		lw = lww;
		
		buildUI();
		
		lm.medias_updated.connect(medias_updated);
		lm.lfm.logged_in.connect(logged_in_to_lastfm);
	}
	
	private void buildUI() {
		/* put it in event box so we can color background white */
		EventBox eb = new EventBox();
		
		// paint the background color
		eb.override_background_color (StateFlags.NORMAL, lw.base_color);
		
		title = new Label("Title");
		artist = new Label("Artist");
		loveMedia = new Button();
		banMedia = new Button();
		artistImage = new Image();
		rating = new RatingWidget(null, true, IconSize.MENU);
		album = new Label("Album");
		year = new Label("Year");
		ssv = new SimilarMediasView(lm, lw);
		
		/* use markup */
		title.set_markup("<span size=\"large\"><b>Title</b></span>");
		year.set_markup("<span size=\"x-small\">Year</span>");
		
		/* ellipsize */
		title.ellipsize = Pango.EllipsizeMode.END;
		artist.ellipsize = Pango.EllipsizeMode.END;
		album.ellipsize = Pango.EllipsizeMode.END;
		year.ellipsize = Pango.EllipsizeMode.END;
		
		loveMedia.relief = ReliefStyle.NONE;
		banMedia.relief = ReliefStyle.NONE;
		
		var lastfm_love_icon = lm.icons.lastfm_love_icon.render (IconSize.MENU, null);
		var lastfm_ban_icon = lm.icons.lastfm_ban_icon.render (IconSize.MENU, null);
		
		loveMedia.set_image(new Image.from_pixbuf(lastfm_love_icon));
		banMedia.set_image(new Image.from_pixbuf(lastfm_ban_icon));
		
		HBox padding = new HBox(false, 10);
		VBox content = new VBox(false, 0);
		
		HBox buttons = new HBox(false, 0);
		buttons.pack_start(new Label(""), true, true, 0);
		buttons.pack_start(loveMedia, false, false, 0);
		buttons.pack_end(new Label(""), true, true, 0);
		buttons.pack_end(banMedia, false, false, 0);
		
		artistImageScroll = new ScrolledWindow(null, null);
		Viewport imageVP = new Viewport(null, null);
		artistImageScroll.set_policy(PolicyType.AUTOMATIC, PolicyType.NEVER);
		imageVP.set_shadow_type(ShadowType.NONE);
		imageVP.add(artistImage);
		imageVP.override_background_color (StateFlags.NORMAL, lw.base_color);
		artistImageScroll.add(imageVP);
		
		content.pack_start(wrap_alignment(title, 5, 0, 0, 5), false, true, 0);
		content.pack_start(wrap_alignment(artist, 2, 0, 0, 5), false, true, 0);
		content.pack_start(buttons, false, true, 0);
		content.pack_start(wrap_alignment(artistImageScroll, 5, 5, 0, 5), false, true, 0);
		content.pack_start(wrap_alignment(rating, 5, 0, 0, 5), false, true, 0);
		content.pack_start(wrap_alignment(album, 5, 0, 0, 5), false, true, 0);
		content.pack_start(wrap_alignment(year, 0, 0, 20, 5), false, true, 0);
		content.pack_start(ssv, true, true, 0);
		
		eb.add(content);
		
		padding.pack_start(eb, true, true, 0);
		
		Viewport vp = new Viewport(null, null);
		vp.set_shadow_type(ShadowType.NONE);
		vp.add(padding);
		
		add(vp);
		
		this.set_policy(PolicyType.NEVER, PolicyType.AUTOMATIC);
		this.set_shadow_type(ShadowType.NONE);
		
		// signals here
		rating.rating_changed.connect(ratingChanged);
		this.size_allocate.connect(resized);
		//title.button_press_event.connect(titleClicked);
		loveMedia.clicked.connect(loveButtonClicked);
		banMedia.clicked.connect(banButtonClicked);
	}
	
	public static Gtk.Alignment wrap_alignment (Gtk.Widget widget, int top, int right, int bottom, int left) {
		var alignment = new Gtk.Alignment(0.0f, 0.0f, 1.0f, 1.0f);
		alignment.top_padding = top;
		alignment.right_padding = right;
		alignment.bottom_padding = bottom;
		alignment.left_padding = left;
		
		alignment.add(widget);
		return alignment;
	}
	
	public void logged_in_to_lastfm() {
		setVisibilities();
	}
	
	public void setVisibilities() {
		if(lm.settings.getLastFMSessionKey() != "") {
			loveMedia.set_visible(true);
			banMedia.set_visible(true);
		}
		else {
			loveMedia.set_visible(false);
			banMedia.set_visible(false);
		}
	}
	
	public void updateMedia(int new_id) {
		id = new_id;
		Media s = lm.media_from_id(id);
		
		title.set_markup("<span size=\"large\"><b>" + s.title.replace("&", "&amp;") + "</b></span>");
		artist.set_text(s.artist);
		album.set_text(s.album);
		
		// do rating stuff
		rating.set_rating((int)s.rating);
		
		if(s.year > 1900)
			year.set_markup("<span size=\"x-small\">" + s.year.to_string() + "</span>");
		else
			year.set_markup("");
		
		updateArtistImage(false);
		ssv.hide();
		
		setVisibilities();
	}
	
	public void updateArtistImage(bool is_initial) {
		//if(lm.media_from_id(id) == null)
			return;
		
		string file = lm.media_from_id(id).getArtistImagePath();
		if(file != "" && GLib.File.new_for_path(file).query_exists()) {
			artistImage.show();
			try {
				var pixbuf = new Gdk.Pixbuf.from_file_at_scale(file, lm.settings.getMoreWidth() - 10, lm.settings.getMoreWidth() - 10, true);
				var max_width = artistImageScroll.get_allocated_width();
				
				while(pixbuf.width > max_width) {
					pixbuf = pixbuf.scale_simple(pixbuf.width - 5, pixbuf.height - 5, Gdk.InterpType.BILINEAR);
				}
				artistImage.set_from_pixbuf(pixbuf);
				//artistImage.set_from_pixbuf(new Gdk.Pixbuf.from_file(file));
			}
			catch(GLib.Error err) {
				stdout.printf("Could not set info panel image art: %s\n", err.message);
			}
		}
		else
			artistImage.hide();
	}
	
	public void updateMediaList(Collection<Media> medias) {
		if(medias.size > 8) {
			ssv.show();
			ssv.populateView(medias);
		}
		else {
			ssv.hide();
		}
	}
	
	public virtual void ratingChanged(int new_rating) {
		lm.media_from_id(id).rating = new_rating;
		lm.update_media(lm.media_from_id(id), false, true);
	}
	
	public virtual void medias_updated(Collection<int> ids) {
		if(ids.contains(lm.media_info.media.rowid))
			rating.set_rating((int)lm.media_info.media.rating);
	}
	
	public virtual void resized(Allocation rectangle) {
		// resize the image to fit
		//artistImage.icon_size = rectangle.width - 10;
		updateArtistImage(false);
	}
	
	public virtual bool titleClicked(Gdk.EventButton event) {
		try {
			Thread.create<void*>(() => {
				try {
					GLib.AppInfo.launch_default_for_uri (lm.media_info.track.url, null);
				}
				catch(GLib.Error err) {
					stdout.printf("Could not open url in Last FM: %s\n", err.message);
				}
				
				return null;
			}, false);
		}
		catch(GLib.ThreadError err) {
			stdout.printf("Could not create thread to open title:%s\n", err.message);
			
		}
		
		return false;
	}
	
	public virtual void loveButtonClicked() {
		lm.lfm.loveTrack(lm.media_info.media.title, lm.media_info.media.artist);
	}
	
	public virtual void banButtonClicked() {
		lm.lfm.banTrack(lm.media_info.media.title, lm.media_info.media.artist);
	}
}
