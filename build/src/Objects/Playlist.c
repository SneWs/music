/* Playlist.c generated by valac 0.11.7, the Vala compiler
 * generated from Playlist.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <gtk/gtk.h>


#define BEAT_BOX_TYPE_PLAYLIST (beat_box_playlist_get_type ())
#define BEAT_BOX_PLAYLIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_PLAYLIST, BeatBoxPlaylist))
#define BEAT_BOX_PLAYLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_PLAYLIST, BeatBoxPlaylistClass))
#define BEAT_BOX_IS_PLAYLIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_PLAYLIST))
#define BEAT_BOX_IS_PLAYLIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_PLAYLIST))
#define BEAT_BOX_PLAYLIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_PLAYLIST, BeatBoxPlaylistClass))

typedef struct _BeatBoxPlaylist BeatBoxPlaylist;
typedef struct _BeatBoxPlaylistClass BeatBoxPlaylistClass;
typedef struct _BeatBoxPlaylistPrivate BeatBoxPlaylistPrivate;

#define BEAT_BOX_TYPE_TREE_VIEW_SETUP (beat_box_tree_view_setup_get_type ())
#define BEAT_BOX_TREE_VIEW_SETUP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_TREE_VIEW_SETUP, BeatBoxTreeViewSetup))
#define BEAT_BOX_TREE_VIEW_SETUP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_TREE_VIEW_SETUP, BeatBoxTreeViewSetupClass))
#define BEAT_BOX_IS_TREE_VIEW_SETUP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_TREE_VIEW_SETUP))
#define BEAT_BOX_IS_TREE_VIEW_SETUP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_TREE_VIEW_SETUP))
#define BEAT_BOX_TREE_VIEW_SETUP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_TREE_VIEW_SETUP, BeatBoxTreeViewSetupClass))

typedef struct _BeatBoxTreeViewSetup BeatBoxTreeViewSetup;
typedef struct _BeatBoxTreeViewSetupClass BeatBoxTreeViewSetupClass;

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define BEAT_BOX_TYPE_LIBRARY_MANAGER (beat_box_library_manager_get_type ())
#define BEAT_BOX_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManager))
#define BEAT_BOX_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))
#define BEAT_BOX_IS_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_IS_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_LIBRARY_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))

typedef struct _BeatBoxLibraryManager BeatBoxLibraryManager;
typedef struct _BeatBoxLibraryManagerClass BeatBoxLibraryManagerClass;

struct _BeatBoxPlaylist {
	GObject parent_instance;
	BeatBoxPlaylistPrivate * priv;
	BeatBoxTreeViewSetup* tvs;
};

struct _BeatBoxPlaylistClass {
	GObjectClass parent_class;
};

struct _BeatBoxPlaylistPrivate {
	gchar* _name;
	gint _rowid;
	GeeLinkedList* _songs;
};


static gpointer beat_box_playlist_parent_class = NULL;

GType beat_box_playlist_get_type (void) G_GNUC_CONST;
GType beat_box_tree_view_setup_get_type (void) G_GNUC_CONST;
GType beat_box_song_get_type (void) G_GNUC_CONST;
#define BEAT_BOX_PLAYLIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BEAT_BOX_TYPE_PLAYLIST, BeatBoxPlaylistPrivate))
enum  {
	BEAT_BOX_PLAYLIST_DUMMY_PROPERTY,
	BEAT_BOX_PLAYLIST_ROWID,
	BEAT_BOX_PLAYLIST_NAME
};
BeatBoxPlaylist* beat_box_playlist_new (void);
BeatBoxPlaylist* beat_box_playlist_construct (GType object_type);
BeatBoxTreeViewSetup* beat_box_tree_view_setup_new (const gchar* sort_col, GtkSortType sort_dir);
BeatBoxTreeViewSetup* beat_box_tree_view_setup_construct (GType object_type, const gchar* sort_col, GtkSortType sort_dir);
BeatBoxPlaylist* beat_box_playlist_new_with_info (gint rowid, const gchar* name);
BeatBoxPlaylist* beat_box_playlist_construct_with_info (GType object_type, gint rowid, const gchar* name);
GeeLinkedList* beat_box_playlist_songs (BeatBoxPlaylist* self);
void beat_box_playlist_addSong (BeatBoxPlaylist* self, BeatBoxSong* s);
void beat_box_playlist_removeSong (BeatBoxPlaylist* self, BeatBoxSong* s);
const gchar* beat_box_song_get_title (BeatBoxSong* self);
const gchar* beat_box_song_get_artist (BeatBoxSong* self);
const gchar* beat_box_song_get_album (BeatBoxSong* self);
void beat_box_playlist_clear (BeatBoxPlaylist* self);
void beat_box_playlist_songs_from_string (BeatBoxPlaylist* self, const gchar* songs);
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_album (BeatBoxSong* self, const gchar* value);
gchar* beat_box_playlist_songs_to_string (BeatBoxPlaylist* self);
GType beat_box_library_manager_get_type (void) G_GNUC_CONST;
GeeLinkedList* beat_box_playlist_analyze (BeatBoxPlaylist* self, BeatBoxLibraryManager* lm);
GeeCollection* beat_box_library_manager_songs (BeatBoxLibraryManager* self);
gint beat_box_song_get_rowid (BeatBoxSong* self);
gint beat_box_playlist_get_rowid (BeatBoxPlaylist* self);
void beat_box_playlist_set_rowid (BeatBoxPlaylist* self, gint value);
const gchar* beat_box_playlist_get_name (BeatBoxPlaylist* self);
void beat_box_playlist_set_name (BeatBoxPlaylist* self, const gchar* value);
static void beat_box_playlist_finalize (GObject* obj);
static void _vala_beat_box_playlist_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_beat_box_playlist_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


BeatBoxPlaylist* beat_box_playlist_construct (GType object_type) {
	BeatBoxPlaylist * self = NULL;
	gchar* _tmp0_;
	BeatBoxTreeViewSetup* _tmp1_ = NULL;
	GeeLinkedList* _tmp2_ = NULL;
	self = (BeatBoxPlaylist*) g_object_new (object_type, NULL);
	_tmp0_ = g_strdup ("New Playlist");
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	_tmp1_ = beat_box_tree_view_setup_new ("#", GTK_SORT_ASCENDING);
	_g_object_unref0 (self->tvs);
	self->tvs = _tmp1_;
	_tmp2_ = gee_linked_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_g_object_unref0 (self->priv->_songs);
	self->priv->_songs = _tmp2_;
	return self;
}


BeatBoxPlaylist* beat_box_playlist_new (void) {
	return beat_box_playlist_construct (BEAT_BOX_TYPE_PLAYLIST);
}


BeatBoxPlaylist* beat_box_playlist_construct_with_info (GType object_type, gint rowid, const gchar* name) {
	BeatBoxPlaylist * self = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	BeatBoxTreeViewSetup* _tmp1_ = NULL;
	gchar* _tmp2_;
	g_return_val_if_fail (name != NULL, NULL);
	self = (BeatBoxPlaylist*) g_object_new (object_type, NULL);
	_tmp0_ = gee_linked_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_g_object_unref0 (self->priv->_songs);
	self->priv->_songs = _tmp0_;
	_tmp1_ = beat_box_tree_view_setup_new ("#", GTK_SORT_ASCENDING);
	_g_object_unref0 (self->tvs);
	self->tvs = _tmp1_;
	self->priv->_rowid = rowid;
	_tmp2_ = g_strdup (name);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp2_;
	return self;
}


BeatBoxPlaylist* beat_box_playlist_new_with_info (gint rowid, const gchar* name) {
	return beat_box_playlist_construct_with_info (BEAT_BOX_TYPE_PLAYLIST, rowid, name);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GeeLinkedList* beat_box_playlist_songs (BeatBoxPlaylist* self) {
	GeeLinkedList* result = NULL;
	GeeLinkedList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = _g_object_ref0 (self->priv->_songs);
	result = _tmp0_;
	return result;
}


void beat_box_playlist_addSong (BeatBoxPlaylist* self, BeatBoxSong* s) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (s != NULL);
	gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_songs, s);
}


void beat_box_playlist_removeSong (BeatBoxPlaylist* self, BeatBoxSong* s) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (s != NULL);
	{
		GeeLinkedList* _tmp0_;
		GeeLinkedList* _t_list;
		gint _tmp1_;
		gint _t_size;
		gint _t_index;
		_tmp0_ = _g_object_ref0 (self->priv->_songs);
		_t_list = _tmp0_;
		_tmp1_ = gee_collection_get_size ((GeeCollection*) _t_list);
		_t_size = _tmp1_;
		_t_index = -1;
		while (TRUE) {
			gpointer _tmp2_ = NULL;
			BeatBoxSong* t;
			gboolean _tmp3_ = FALSE;
			gboolean _tmp4_ = FALSE;
			const gchar* _tmp5_ = NULL;
			const gchar* _tmp6_ = NULL;
			_t_index = _t_index + 1;
			if (!(_t_index < _t_size)) {
				break;
			}
			_tmp2_ = gee_abstract_list_get ((GeeAbstractList*) _t_list, _t_index);
			t = (BeatBoxSong*) _tmp2_;
			_tmp5_ = beat_box_song_get_title (t);
			_tmp6_ = beat_box_song_get_title (s);
			if (g_strcmp0 (_tmp5_, _tmp6_) == 0) {
				const gchar* _tmp7_ = NULL;
				const gchar* _tmp8_ = NULL;
				_tmp7_ = beat_box_song_get_artist (t);
				_tmp8_ = beat_box_song_get_artist (s);
				_tmp4_ = g_strcmp0 (_tmp7_, _tmp8_) == 0;
			} else {
				_tmp4_ = FALSE;
			}
			if (_tmp4_) {
				const gchar* _tmp9_ = NULL;
				const gchar* _tmp10_ = NULL;
				_tmp9_ = beat_box_song_get_album (t);
				_tmp10_ = beat_box_song_get_album (s);
				_tmp3_ = g_strcmp0 (_tmp9_, _tmp10_) == 0;
			} else {
				_tmp3_ = FALSE;
			}
			if (_tmp3_) {
				gee_abstract_collection_remove ((GeeAbstractCollection*) self->priv->_songs, t);
				_g_object_unref0 (t);
				break;
			}
			_g_object_unref0 (t);
		}
		_g_object_unref0 (_t_list);
	}
}


void beat_box_playlist_clear (BeatBoxPlaylist* self) {
	g_return_if_fail (self != NULL);
	gee_abstract_collection_clear ((GeeAbstractCollection*) self->priv->_songs);
}


void beat_box_playlist_songs_from_string (BeatBoxPlaylist* self, const gchar* songs) {
	gchar** _tmp0_;
	gchar** _tmp1_ = NULL;
	gchar** song_strings;
	gint song_strings_length1;
	gint _song_strings_size_;
	gint index = 0;
	g_return_if_fail (self != NULL);
	g_return_if_fail (songs != NULL);
	_tmp1_ = _tmp0_ = g_strsplit (songs, "<song_seperator>", 0);
	song_strings = _tmp1_;
	song_strings_length1 = _vala_array_length (_tmp0_);
	_song_strings_size_ = _vala_array_length (_tmp0_);
	{
		gboolean _tmp2_;
		index = 0;
		_tmp2_ = TRUE;
		while (TRUE) {
			gchar** _tmp3_;
			gchar** _tmp4_ = NULL;
			gchar** pieces_of_song;
			gint pieces_of_song_length1;
			gint _pieces_of_song_size_;
			BeatBoxSong* _tmp5_ = NULL;
			BeatBoxSong* s;
			if (!_tmp2_) {
				index = index + 1;
			}
			_tmp2_ = FALSE;
			if (!(index < (song_strings_length1 - 1))) {
				break;
			}
			_tmp4_ = _tmp3_ = g_strsplit (song_strings[index], "<value_seperator>", 0);
			pieces_of_song = _tmp4_;
			pieces_of_song_length1 = _vala_array_length (_tmp3_);
			_pieces_of_song_size_ = _vala_array_length (_tmp3_);
			_tmp5_ = beat_box_song_new ("");
			s = _tmp5_;
			beat_box_song_set_title (s, pieces_of_song[0]);
			beat_box_song_set_artist (s, pieces_of_song[1]);
			beat_box_song_set_album (s, pieces_of_song[2]);
			beat_box_playlist_addSong (self, s);
			_g_object_unref0 (s);
			pieces_of_song = (_vala_array_free (pieces_of_song, pieces_of_song_length1, (GDestroyNotify) g_free), NULL);
		}
	}
	song_strings = (_vala_array_free (song_strings, song_strings_length1, (GDestroyNotify) g_free), NULL);
}


gchar* beat_box_playlist_songs_to_string (BeatBoxPlaylist* self) {
	gchar* result = NULL;
	gchar* _tmp0_;
	gchar* rv;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup ("");
	rv = _tmp0_;
	{
		GeeLinkedList* _tmp1_;
		GeeLinkedList* _s_list;
		gint _tmp2_;
		gint _s_size;
		gint _s_index;
		_tmp1_ = _g_object_ref0 (self->priv->_songs);
		_s_list = _tmp1_;
		_tmp2_ = gee_collection_get_size ((GeeCollection*) _s_list);
		_s_size = _tmp2_;
		_s_index = -1;
		while (TRUE) {
			gpointer _tmp3_ = NULL;
			BeatBoxSong* s;
			const gchar* _tmp4_ = NULL;
			gchar* _tmp5_;
			gchar* _tmp6_;
			const gchar* _tmp7_ = NULL;
			gchar* _tmp8_;
			gchar* _tmp9_;
			gchar* _tmp10_;
			gchar* _tmp11_;
			const gchar* _tmp12_ = NULL;
			gchar* _tmp13_;
			gchar* _tmp14_;
			gchar* _tmp15_;
			gchar* _tmp16_;
			gchar* _tmp17_;
			_s_index = _s_index + 1;
			if (!(_s_index < _s_size)) {
				break;
			}
			_tmp3_ = gee_abstract_list_get ((GeeAbstractList*) _s_list, _s_index);
			s = (BeatBoxSong*) _tmp3_;
			_tmp4_ = beat_box_song_get_title (s);
			_tmp5_ = g_strconcat (_tmp4_, "<value_seperator>", NULL);
			_tmp6_ = _tmp5_;
			_tmp7_ = beat_box_song_get_artist (s);
			_tmp8_ = g_strconcat (_tmp6_, _tmp7_, NULL);
			_tmp9_ = _tmp8_;
			_tmp10_ = g_strconcat (_tmp9_, "<value_seperator>", NULL);
			_tmp11_ = _tmp10_;
			_tmp12_ = beat_box_song_get_album (s);
			_tmp13_ = g_strconcat (_tmp11_, _tmp12_, NULL);
			_tmp14_ = _tmp13_;
			_tmp15_ = g_strconcat (_tmp14_, "<song_seperator>", NULL);
			_tmp16_ = _tmp15_;
			_tmp17_ = g_strconcat (rv, _tmp16_, NULL);
			_g_free0 (rv);
			rv = _tmp17_;
			_g_free0 (_tmp16_);
			_g_free0 (_tmp14_);
			_g_free0 (_tmp11_);
			_g_free0 (_tmp9_);
			_g_free0 (_tmp6_);
			_g_object_unref0 (s);
		}
		_g_object_unref0 (_s_list);
	}
	result = rv;
	return result;
}


GeeLinkedList* beat_box_playlist_analyze (BeatBoxPlaylist* self, BeatBoxLibraryManager* lm) {
	GeeLinkedList* result = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	GeeLinkedList* rv;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (lm != NULL, NULL);
	_tmp0_ = gee_linked_list_new (G_TYPE_INT, NULL, NULL, NULL);
	rv = _tmp0_;
	{
		GeeCollection* _tmp1_ = NULL;
		GeeCollection* _tmp2_;
		GeeIterator* _tmp3_ = NULL;
		GeeIterator* _tmp4_;
		GeeIterator* _s_it;
		_tmp1_ = beat_box_library_manager_songs (lm);
		_tmp2_ = _tmp1_;
		_tmp3_ = gee_iterable_iterator ((GeeIterable*) _tmp2_);
		_tmp4_ = _tmp3_;
		_g_object_unref0 (_tmp2_);
		_s_it = _tmp4_;
		while (TRUE) {
			gboolean _tmp5_;
			gpointer _tmp6_ = NULL;
			BeatBoxSong* s;
			_tmp5_ = gee_iterator_next (_s_it);
			if (!_tmp5_) {
				break;
			}
			_tmp6_ = gee_iterator_get (_s_it);
			s = (BeatBoxSong*) _tmp6_;
			{
				GeeLinkedList* _tmp7_;
				GeeLinkedList* _l_list;
				gint _tmp8_;
				gint _l_size;
				gint _l_index;
				_tmp7_ = _g_object_ref0 (self->priv->_songs);
				_l_list = _tmp7_;
				_tmp8_ = gee_collection_get_size ((GeeCollection*) _l_list);
				_l_size = _tmp8_;
				_l_index = -1;
				while (TRUE) {
					gpointer _tmp9_ = NULL;
					BeatBoxSong* l;
					gboolean _tmp10_ = FALSE;
					gboolean _tmp11_ = FALSE;
					const gchar* _tmp12_ = NULL;
					const gchar* _tmp13_ = NULL;
					_l_index = _l_index + 1;
					if (!(_l_index < _l_size)) {
						break;
					}
					_tmp9_ = gee_abstract_list_get ((GeeAbstractList*) _l_list, _l_index);
					l = (BeatBoxSong*) _tmp9_;
					_tmp12_ = beat_box_song_get_title (s);
					_tmp13_ = beat_box_song_get_title (l);
					if (g_strcmp0 (_tmp12_, _tmp13_) == 0) {
						const gchar* _tmp14_ = NULL;
						const gchar* _tmp15_ = NULL;
						_tmp14_ = beat_box_song_get_artist (s);
						_tmp15_ = beat_box_song_get_artist (l);
						_tmp11_ = g_strcmp0 (_tmp14_, _tmp15_) == 0;
					} else {
						_tmp11_ = FALSE;
					}
					if (_tmp11_) {
						const gchar* _tmp16_ = NULL;
						const gchar* _tmp17_ = NULL;
						_tmp16_ = beat_box_song_get_album (s);
						_tmp17_ = beat_box_song_get_album (l);
						_tmp10_ = g_strcmp0 (_tmp16_, _tmp17_) == 0;
					} else {
						_tmp10_ = FALSE;
					}
					if (_tmp10_) {
						gint _tmp18_;
						_tmp18_ = beat_box_song_get_rowid (s);
						gee_abstract_collection_add ((GeeAbstractCollection*) rv, GINT_TO_POINTER (_tmp18_));
					}
					_g_object_unref0 (l);
				}
				_g_object_unref0 (_l_list);
			}
			_g_object_unref0 (s);
		}
		_g_object_unref0 (_s_it);
	}
	result = rv;
	return result;
}


gint beat_box_playlist_get_rowid (BeatBoxPlaylist* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_rowid;
	return result;
}


void beat_box_playlist_set_rowid (BeatBoxPlaylist* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_rowid = value;
	g_object_notify ((GObject *) self, "rowid");
}


const gchar* beat_box_playlist_get_name (BeatBoxPlaylist* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_name;
	return result;
}


void beat_box_playlist_set_name (BeatBoxPlaylist* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	g_object_notify ((GObject *) self, "name");
}


static void beat_box_playlist_class_init (BeatBoxPlaylistClass * klass) {
	beat_box_playlist_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (BeatBoxPlaylistPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_beat_box_playlist_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_beat_box_playlist_set_property;
	G_OBJECT_CLASS (klass)->finalize = beat_box_playlist_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_PLAYLIST_ROWID, g_param_spec_int ("rowid", "rowid", "rowid", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_PLAYLIST_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void beat_box_playlist_instance_init (BeatBoxPlaylist * self) {
	self->priv = BEAT_BOX_PLAYLIST_GET_PRIVATE (self);
}


static void beat_box_playlist_finalize (GObject* obj) {
	BeatBoxPlaylist * self;
	self = BEAT_BOX_PLAYLIST (obj);
	_g_free0 (self->priv->_name);
	_g_object_unref0 (self->tvs);
	_g_object_unref0 (self->priv->_songs);
	G_OBJECT_CLASS (beat_box_playlist_parent_class)->finalize (obj);
}


GType beat_box_playlist_get_type (void) {
	static volatile gsize beat_box_playlist_type_id__volatile = 0;
	if (g_once_init_enter (&beat_box_playlist_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BeatBoxPlaylistClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) beat_box_playlist_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BeatBoxPlaylist), 0, (GInstanceInitFunc) beat_box_playlist_instance_init, NULL };
		GType beat_box_playlist_type_id;
		beat_box_playlist_type_id = g_type_register_static (G_TYPE_OBJECT, "BeatBoxPlaylist", &g_define_type_info, 0);
		g_once_init_leave (&beat_box_playlist_type_id__volatile, beat_box_playlist_type_id);
	}
	return beat_box_playlist_type_id__volatile;
}


static void _vala_beat_box_playlist_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	BeatBoxPlaylist * self;
	self = BEAT_BOX_PLAYLIST (object);
	switch (property_id) {
		case BEAT_BOX_PLAYLIST_ROWID:
		g_value_set_int (value, beat_box_playlist_get_rowid (self));
		break;
		case BEAT_BOX_PLAYLIST_NAME:
		g_value_set_string (value, beat_box_playlist_get_name (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_beat_box_playlist_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	BeatBoxPlaylist * self;
	self = BEAT_BOX_PLAYLIST (object);
	switch (property_id) {
		case BEAT_BOX_PLAYLIST_ROWID:
		beat_box_playlist_set_rowid (self, g_value_get_int (value));
		break;
		case BEAT_BOX_PLAYLIST_NAME:
		beat_box_playlist_set_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



