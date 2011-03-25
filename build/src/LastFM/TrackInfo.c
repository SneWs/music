/* TrackInfo.c generated by valac 0.11.7, the Vala compiler
 * generated from TrackInfo.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define LAST_FM_TYPE_TRACK_INFO (last_fm_track_info_get_type ())
#define LAST_FM_TRACK_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfo))
#define LAST_FM_TRACK_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfoClass))
#define LAST_FM_IS_TRACK_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_TRACK_INFO))
#define LAST_FM_IS_TRACK_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_TRACK_INFO))
#define LAST_FM_TRACK_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfoClass))

typedef struct _LastFMTrackInfo LastFMTrackInfo;
typedef struct _LastFMTrackInfoClass LastFMTrackInfoClass;
typedef struct _LastFMTrackInfoPrivate LastFMTrackInfoPrivate;

#define LAST_FM_TYPE_TAG (last_fm_tag_get_type ())
#define LAST_FM_TAG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_TAG, LastFMTag))
#define LAST_FM_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_TAG, LastFMTagClass))
#define LAST_FM_IS_TAG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_TAG))
#define LAST_FM_IS_TAG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_TAG))
#define LAST_FM_TAG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_TAG, LastFMTagClass))

typedef struct _LastFMTag LastFMTag;
typedef struct _LastFMTagClass LastFMTagClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _LastFMTrackInfo {
	GObject parent_instance;
	LastFMTrackInfoPrivate * priv;
};

struct _LastFMTrackInfoClass {
	GObjectClass parent_class;
};

struct _LastFMTrackInfoPrivate {
	gint _id;
	gchar* _name;
	gchar* _artist;
	gchar* _url;
	gint _duration;
	gint _streamable;
	gint _listeners;
	gint _playcount;
	gchar* _summary;
	gchar* _content;
	GeeArrayList* _tags;
	LastFMTag* tagToAdd;
};


static gpointer last_fm_track_info_parent_class = NULL;

GType last_fm_track_info_get_type (void) G_GNUC_CONST;
GType last_fm_tag_get_type (void) G_GNUC_CONST;
#define LAST_FM_TRACK_INFO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LAST_FM_TYPE_TRACK_INFO, LastFMTrackInfoPrivate))
enum  {
	LAST_FM_TRACK_INFO_DUMMY_PROPERTY,
	LAST_FM_TRACK_INFO_ID,
	LAST_FM_TRACK_INFO_NAME,
	LAST_FM_TRACK_INFO_ARTIST,
	LAST_FM_TRACK_INFO_URL,
	LAST_FM_TRACK_INFO_DURATION,
	LAST_FM_TRACK_INFO_STREAMABLE,
	LAST_FM_TRACK_INFO_PLAYCOUNT,
	LAST_FM_TRACK_INFO_LISTENERS,
	LAST_FM_TRACK_INFO_SUMMARY,
	LAST_FM_TRACK_INFO_CONTENT
};
#define LAST_FM_TRACK_INFO_api "a40ea1720028bd40c66b17d7146b3f3b"
LastFMTrackInfo* last_fm_track_info_new_basic (void);
LastFMTrackInfo* last_fm_track_info_construct_basic (GType object_type);
LastFMTrackInfo* last_fm_track_info_new_with_info (const gchar* artist, const gchar* track);
LastFMTrackInfo* last_fm_track_info_construct_with_info (GType object_type, const gchar* artist, const gchar* track);
gchar* last_fm_core_fix_for_url (const gchar* fix);
LastFMTrackInfo* last_fm_track_info_new_with_doc (xmlDoc* doc);
LastFMTrackInfo* last_fm_track_info_construct_with_doc (GType object_type, xmlDoc* doc);
static void last_fm_track_info_parse_node (LastFMTrackInfo* self, xmlNode* node, const gchar* parent);
LastFMTag* last_fm_tag_new (void);
LastFMTag* last_fm_tag_construct (GType object_type);
void last_fm_tag_set_tag (LastFMTag* self, const gchar* value);
void last_fm_tag_set_url (LastFMTag* self, const gchar* value);
void last_fm_track_info_addTag (LastFMTrackInfo* self, LastFMTag* t);
void last_fm_track_info_addTagString (LastFMTrackInfo* self, const gchar* t);
LastFMTag* last_fm_tag_new_with_string (const gchar* tag);
LastFMTag* last_fm_tag_construct_with_string (GType object_type, const gchar* tag);
GeeArrayList* last_fm_track_info_tags (LastFMTrackInfo* self);
GeeArrayList* last_fm_track_info_tagStrings (LastFMTrackInfo* self);
const gchar* last_fm_tag_get_tag (LastFMTag* self);
LastFMTrackInfo* last_fm_track_info_new (void);
LastFMTrackInfo* last_fm_track_info_construct (GType object_type);
gint last_fm_track_info_get_id (LastFMTrackInfo* self);
void last_fm_track_info_set_id (LastFMTrackInfo* self, gint value);
const gchar* last_fm_track_info_get_name (LastFMTrackInfo* self);
void last_fm_track_info_set_name (LastFMTrackInfo* self, const gchar* value);
const gchar* last_fm_track_info_get_artist (LastFMTrackInfo* self);
void last_fm_track_info_set_artist (LastFMTrackInfo* self, const gchar* value);
const gchar* last_fm_track_info_get_url (LastFMTrackInfo* self);
void last_fm_track_info_set_url (LastFMTrackInfo* self, const gchar* value);
gint last_fm_track_info_get_duration (LastFMTrackInfo* self);
void last_fm_track_info_set_duration (LastFMTrackInfo* self, gint value);
gint last_fm_track_info_get_streamable (LastFMTrackInfo* self);
void last_fm_track_info_set_streamable (LastFMTrackInfo* self, gint value);
gint last_fm_track_info_get_playcount (LastFMTrackInfo* self);
void last_fm_track_info_set_playcount (LastFMTrackInfo* self, gint value);
gint last_fm_track_info_get_listeners (LastFMTrackInfo* self);
void last_fm_track_info_set_listeners (LastFMTrackInfo* self, gint value);
const gchar* last_fm_track_info_get_summary (LastFMTrackInfo* self);
void last_fm_track_info_set_summary (LastFMTrackInfo* self, const gchar* value);
const gchar* last_fm_track_info_get_content (LastFMTrackInfo* self);
void last_fm_track_info_set_content (LastFMTrackInfo* self, const gchar* value);
static void last_fm_track_info_finalize (GObject* obj);
static void _vala_last_fm_track_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_last_fm_track_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


LastFMTrackInfo* last_fm_track_info_construct_basic (GType object_type) {
	LastFMTrackInfo * self = NULL;
	gchar* _tmp0_;
	GeeArrayList* _tmp1_ = NULL;
	self = (LastFMTrackInfo*) g_object_new (object_type, NULL);
	_tmp0_ = g_strdup ("Unknown Track");
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	_tmp1_ = gee_array_list_new (LAST_FM_TYPE_TAG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_g_object_unref0 (self->priv->_tags);
	self->priv->_tags = _tmp1_;
	return self;
}


LastFMTrackInfo* last_fm_track_info_new_basic (void) {
	return last_fm_track_info_construct_basic (LAST_FM_TYPE_TRACK_INFO);
}


LastFMTrackInfo* last_fm_track_info_construct_with_info (GType object_type, const gchar* artist, const gchar* track) {
	LastFMTrackInfo * self = NULL;
	gchar* _tmp0_ = NULL;
	gchar* track_fixed;
	gchar* _tmp1_ = NULL;
	gchar* artist_fixed;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* url;
	xmlDoc* _tmp8_ = NULL;
	xmlDoc* doc;
	g_return_val_if_fail (artist != NULL, NULL);
	g_return_val_if_fail (track != NULL, NULL);
	_tmp0_ = last_fm_core_fix_for_url (track);
	track_fixed = _tmp0_;
	_tmp1_ = last_fm_core_fix_for_url (artist);
	artist_fixed = _tmp1_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=track.getinfo&api_key=" LAST_FM_TRACK_INFO_api "&artist=", artist_fixed, NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "&track=", NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, track_fixed, NULL);
	_tmp7_ = _tmp6_;
	_g_free0 (_tmp5_);
	_g_free0 (_tmp3_);
	url = _tmp7_;
	fprintf (stdout, "Parsing track info.\n");
	_tmp8_ = xmlParseFile (url);
	doc = _tmp8_;
	self = (LastFMTrackInfo*) last_fm_track_info_construct_with_doc (object_type, doc);
	_g_free0 (url);
	_g_free0 (artist_fixed);
	_g_free0 (track_fixed);
	return self;
}


LastFMTrackInfo* last_fm_track_info_new_with_info (const gchar* artist, const gchar* track) {
	return last_fm_track_info_construct_with_info (LAST_FM_TYPE_TRACK_INFO, artist, track);
}


LastFMTrackInfo* last_fm_track_info_construct_with_doc (GType object_type, xmlDoc* doc) {
	LastFMTrackInfo * self = NULL;
	xmlNode* _tmp0_ = NULL;
	xmlNode* root;
	self = (LastFMTrackInfo*) last_fm_track_info_construct_basic (object_type);
	_g_object_unref0 (self->priv->tagToAdd);
	self->priv->tagToAdd = NULL;
	if (doc == NULL) {
		fprintf (stderr, "Could not get Track info. \n");
		return self;
	}
	_tmp0_ = xmlDocGetRootElement (doc);
	root = _tmp0_;
	if (root == NULL) {
		xmlFreeDoc (doc);
		fprintf (stderr, "The xml file is empty. \n");
		return self;
	}
	last_fm_track_info_parse_node (self, root, "");
	xmlFreeDoc (doc);
	return self;
}


LastFMTrackInfo* last_fm_track_info_new_with_doc (xmlDoc* doc) {
	return last_fm_track_info_construct_with_doc (LAST_FM_TYPE_TRACK_INFO, doc);
}


/** recursively parses the nodes in a xml doc and also calls parse_properties
 * @param node The node to parse
 * @param parent the parent node
 */
static void last_fm_track_info_parse_node (LastFMTrackInfo* self, xmlNode* node, const gchar* parent) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (parent != NULL);
	{
		xmlNode* iter;
		iter = node->children;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				gchar* _tmp1_;
				gchar* node_name;
				gchar* _tmp2_ = NULL;
				gchar* node_content;
				gchar* _tmp14_;
				gchar* _tmp15_;
				if (!_tmp0_) {
					iter = iter->next;
				}
				_tmp0_ = FALSE;
				if (!(iter != NULL)) {
					break;
				}
				if (iter->type != XML_ELEMENT_NODE) {
					continue;
				}
				_tmp1_ = g_strdup (iter->name);
				node_name = _tmp1_;
				_tmp2_ = xmlNodeGetContent (iter);
				node_content = _tmp2_;
				if (g_strcmp0 (parent, "track") == 0) {
					if (g_strcmp0 (node_name, "name") == 0) {
						gchar* _tmp3_;
						_tmp3_ = g_strdup (node_content);
						_g_free0 (self->priv->_name);
						self->priv->_name = _tmp3_;
					} else {
						if (g_strcmp0 (node_name, "id") == 0) {
							gint _tmp4_;
							_tmp4_ = atoi (node_content);
							self->priv->_id = _tmp4_;
						} else {
							if (g_strcmp0 (node_name, "url") == 0) {
								gchar* _tmp5_;
								_tmp5_ = g_strdup (node_content);
								_g_free0 (self->priv->_url);
								self->priv->_url = _tmp5_;
							} else {
								if (g_strcmp0 (node_name, "duration") == 0) {
									gint _tmp6_;
									_tmp6_ = atoi (node_content);
									self->priv->_duration = _tmp6_;
								} else {
									if (g_strcmp0 (node_name, "streamable") == 0) {
										gint _tmp7_;
										_tmp7_ = atoi (node_content);
										self->priv->_streamable = _tmp7_;
									} else {
										if (g_strcmp0 (node_name, "playcount") == 0) {
											gint _tmp8_;
											_tmp8_ = atoi (node_content);
											self->priv->_playcount = _tmp8_;
										} else {
											if (g_strcmp0 (node_name, "listeners") == 0) {
												gint _tmp9_;
												_tmp9_ = atoi (node_content);
												self->priv->_listeners = _tmp9_;
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (g_strcmp0 (parent, "trackartist") == 0) {
						if (g_strcmp0 (node_name, "name") == 0) {
							gchar* _tmp10_;
							_tmp10_ = g_strdup (node_content);
							_g_free0 (self->priv->_artist);
							self->priv->_artist = _tmp10_;
						}
					} else {
						if (g_strcmp0 (parent, "trackwiki") == 0) {
							if (g_strcmp0 (node_name, "summary") == 0) {
								gchar* _tmp11_;
								_tmp11_ = g_strdup (node_content);
								_g_free0 (self->priv->_summary);
								self->priv->_summary = _tmp11_;
							} else {
								if (g_strcmp0 (node_name, "content") == 0) {
									gchar* _tmp12_;
									_tmp12_ = g_strdup (node_content);
									_g_free0 (self->priv->_content);
									self->priv->_content = _tmp12_;
								}
							}
						} else {
							if (g_strcmp0 (parent, "tracktoptagstag") == 0) {
								if (g_strcmp0 (node_name, "name") == 0) {
									LastFMTag* _tmp13_ = NULL;
									if (self->priv->tagToAdd != NULL) {
										gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_tags, self->priv->tagToAdd);
									}
									_tmp13_ = last_fm_tag_new ();
									_g_object_unref0 (self->priv->tagToAdd);
									self->priv->tagToAdd = _tmp13_;
									last_fm_tag_set_tag (self->priv->tagToAdd, node_content);
								} else {
									if (g_strcmp0 (node_name, "url") == 0) {
										last_fm_tag_set_url (self->priv->tagToAdd, node_content);
									}
								}
							}
						}
					}
				}
				_tmp14_ = g_strconcat (parent, node_name, NULL);
				_tmp15_ = _tmp14_;
				last_fm_track_info_parse_node (self, iter, _tmp15_);
				_g_free0 (_tmp15_);
				_g_free0 (node_content);
				_g_free0 (node_name);
			}
		}
	}
}


void last_fm_track_info_addTag (LastFMTrackInfo* self, LastFMTag* t) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (t != NULL);
	gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_tags, t);
}


void last_fm_track_info_addTagString (LastFMTrackInfo* self, const gchar* t) {
	LastFMTag* _tmp0_ = NULL;
	LastFMTag* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (t != NULL);
	_tmp0_ = last_fm_tag_new_with_string (t);
	_tmp1_ = _tmp0_;
	gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_tags, _tmp1_);
	_g_object_unref0 (_tmp1_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GeeArrayList* last_fm_track_info_tags (LastFMTrackInfo* self) {
	GeeArrayList* result = NULL;
	GeeArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = _g_object_ref0 (self->priv->_tags);
	result = _tmp0_;
	return result;
}


GeeArrayList* last_fm_track_info_tagStrings (LastFMTrackInfo* self) {
	GeeArrayList* result = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* tags;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
	tags = _tmp0_;
	{
		GeeArrayList* _tmp1_;
		GeeArrayList* _t_list;
		gint _tmp2_;
		gint _t_size;
		gint _t_index;
		_tmp1_ = _g_object_ref0 (self->priv->_tags);
		_t_list = _tmp1_;
		_tmp2_ = gee_collection_get_size ((GeeCollection*) _t_list);
		_t_size = _tmp2_;
		_t_index = -1;
		while (TRUE) {
			gpointer _tmp3_ = NULL;
			LastFMTag* t;
			const gchar* _tmp4_ = NULL;
			_t_index = _t_index + 1;
			if (!(_t_index < _t_size)) {
				break;
			}
			_tmp3_ = gee_abstract_list_get ((GeeAbstractList*) _t_list, _t_index);
			t = (LastFMTag*) _tmp3_;
			_tmp4_ = last_fm_tag_get_tag (t);
			gee_abstract_collection_add ((GeeAbstractCollection*) tags, _tmp4_);
			_g_object_unref0 (t);
		}
		_g_object_unref0 (_t_list);
	}
	result = tags;
	return result;
}


LastFMTrackInfo* last_fm_track_info_construct (GType object_type) {
	LastFMTrackInfo * self = NULL;
	self = (LastFMTrackInfo*) g_object_new (object_type, NULL);
	return self;
}


LastFMTrackInfo* last_fm_track_info_new (void) {
	return last_fm_track_info_construct (LAST_FM_TYPE_TRACK_INFO);
}


gint last_fm_track_info_get_id (LastFMTrackInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_id;
	return result;
}


void last_fm_track_info_set_id (LastFMTrackInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_id = value;
	g_object_notify ((GObject *) self, "id");
}


const gchar* last_fm_track_info_get_name (LastFMTrackInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_name;
	return result;
}


void last_fm_track_info_set_name (LastFMTrackInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	g_object_notify ((GObject *) self, "name");
}


const gchar* last_fm_track_info_get_artist (LastFMTrackInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_artist;
	return result;
}


void last_fm_track_info_set_artist (LastFMTrackInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_artist);
	self->priv->_artist = _tmp0_;
	g_object_notify ((GObject *) self, "artist");
}


const gchar* last_fm_track_info_get_url (LastFMTrackInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_url;
	return result;
}


void last_fm_track_info_set_url (LastFMTrackInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_url);
	self->priv->_url = _tmp0_;
	g_object_notify ((GObject *) self, "url");
}


gint last_fm_track_info_get_duration (LastFMTrackInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_duration;
	return result;
}


void last_fm_track_info_set_duration (LastFMTrackInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_duration = value;
	g_object_notify ((GObject *) self, "duration");
}


gint last_fm_track_info_get_streamable (LastFMTrackInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_streamable;
	return result;
}


void last_fm_track_info_set_streamable (LastFMTrackInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_streamable = value;
	g_object_notify ((GObject *) self, "streamable");
}


gint last_fm_track_info_get_playcount (LastFMTrackInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_playcount;
	return result;
}


void last_fm_track_info_set_playcount (LastFMTrackInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_playcount = value;
	g_object_notify ((GObject *) self, "playcount");
}


gint last_fm_track_info_get_listeners (LastFMTrackInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_listeners;
	return result;
}


void last_fm_track_info_set_listeners (LastFMTrackInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_listeners = value;
	g_object_notify ((GObject *) self, "listeners");
}


const gchar* last_fm_track_info_get_summary (LastFMTrackInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_summary;
	return result;
}


void last_fm_track_info_set_summary (LastFMTrackInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_summary);
	self->priv->_summary = _tmp0_;
	g_object_notify ((GObject *) self, "summary");
}


const gchar* last_fm_track_info_get_content (LastFMTrackInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_content;
	return result;
}


void last_fm_track_info_set_content (LastFMTrackInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_content);
	self->priv->_content = _tmp0_;
	g_object_notify ((GObject *) self, "content");
}


static void last_fm_track_info_class_init (LastFMTrackInfoClass * klass) {
	last_fm_track_info_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LastFMTrackInfoPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_last_fm_track_info_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_last_fm_track_info_set_property;
	G_OBJECT_CLASS (klass)->finalize = last_fm_track_info_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_ID, g_param_spec_int ("id", "id", "id", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_ARTIST, g_param_spec_string ("artist", "artist", "artist", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_URL, g_param_spec_string ("url", "url", "url", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_DURATION, g_param_spec_int ("duration", "duration", "duration", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_STREAMABLE, g_param_spec_int ("streamable", "streamable", "streamable", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_PLAYCOUNT, g_param_spec_int ("playcount", "playcount", "playcount", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_LISTENERS, g_param_spec_int ("listeners", "listeners", "listeners", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_SUMMARY, g_param_spec_string ("summary", "summary", "summary", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_TRACK_INFO_CONTENT, g_param_spec_string ("content", "content", "content", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void last_fm_track_info_instance_init (LastFMTrackInfo * self) {
	self->priv = LAST_FM_TRACK_INFO_GET_PRIVATE (self);
}


static void last_fm_track_info_finalize (GObject* obj) {
	LastFMTrackInfo * self;
	self = LAST_FM_TRACK_INFO (obj);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_artist);
	_g_free0 (self->priv->_url);
	_g_free0 (self->priv->_summary);
	_g_free0 (self->priv->_content);
	_g_object_unref0 (self->priv->_tags);
	_g_object_unref0 (self->priv->tagToAdd);
	G_OBJECT_CLASS (last_fm_track_info_parent_class)->finalize (obj);
}


GType last_fm_track_info_get_type (void) {
	static volatile gsize last_fm_track_info_type_id__volatile = 0;
	if (g_once_init_enter (&last_fm_track_info_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LastFMTrackInfoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) last_fm_track_info_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LastFMTrackInfo), 0, (GInstanceInitFunc) last_fm_track_info_instance_init, NULL };
		GType last_fm_track_info_type_id;
		last_fm_track_info_type_id = g_type_register_static (G_TYPE_OBJECT, "LastFMTrackInfo", &g_define_type_info, 0);
		g_once_init_leave (&last_fm_track_info_type_id__volatile, last_fm_track_info_type_id);
	}
	return last_fm_track_info_type_id__volatile;
}


static void _vala_last_fm_track_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	LastFMTrackInfo * self;
	self = LAST_FM_TRACK_INFO (object);
	switch (property_id) {
		case LAST_FM_TRACK_INFO_ID:
		g_value_set_int (value, last_fm_track_info_get_id (self));
		break;
		case LAST_FM_TRACK_INFO_NAME:
		g_value_set_string (value, last_fm_track_info_get_name (self));
		break;
		case LAST_FM_TRACK_INFO_ARTIST:
		g_value_set_string (value, last_fm_track_info_get_artist (self));
		break;
		case LAST_FM_TRACK_INFO_URL:
		g_value_set_string (value, last_fm_track_info_get_url (self));
		break;
		case LAST_FM_TRACK_INFO_DURATION:
		g_value_set_int (value, last_fm_track_info_get_duration (self));
		break;
		case LAST_FM_TRACK_INFO_STREAMABLE:
		g_value_set_int (value, last_fm_track_info_get_streamable (self));
		break;
		case LAST_FM_TRACK_INFO_PLAYCOUNT:
		g_value_set_int (value, last_fm_track_info_get_playcount (self));
		break;
		case LAST_FM_TRACK_INFO_LISTENERS:
		g_value_set_int (value, last_fm_track_info_get_listeners (self));
		break;
		case LAST_FM_TRACK_INFO_SUMMARY:
		g_value_set_string (value, last_fm_track_info_get_summary (self));
		break;
		case LAST_FM_TRACK_INFO_CONTENT:
		g_value_set_string (value, last_fm_track_info_get_content (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_last_fm_track_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	LastFMTrackInfo * self;
	self = LAST_FM_TRACK_INFO (object);
	switch (property_id) {
		case LAST_FM_TRACK_INFO_ID:
		last_fm_track_info_set_id (self, g_value_get_int (value));
		break;
		case LAST_FM_TRACK_INFO_NAME:
		last_fm_track_info_set_name (self, g_value_get_string (value));
		break;
		case LAST_FM_TRACK_INFO_ARTIST:
		last_fm_track_info_set_artist (self, g_value_get_string (value));
		break;
		case LAST_FM_TRACK_INFO_URL:
		last_fm_track_info_set_url (self, g_value_get_string (value));
		break;
		case LAST_FM_TRACK_INFO_DURATION:
		last_fm_track_info_set_duration (self, g_value_get_int (value));
		break;
		case LAST_FM_TRACK_INFO_STREAMABLE:
		last_fm_track_info_set_streamable (self, g_value_get_int (value));
		break;
		case LAST_FM_TRACK_INFO_PLAYCOUNT:
		last_fm_track_info_set_playcount (self, g_value_get_int (value));
		break;
		case LAST_FM_TRACK_INFO_LISTENERS:
		last_fm_track_info_set_listeners (self, g_value_get_int (value));
		break;
		case LAST_FM_TRACK_INFO_SUMMARY:
		last_fm_track_info_set_summary (self, g_value_get_string (value));
		break;
		case LAST_FM_TRACK_INFO_CONTENT:
		last_fm_track_info_set_content (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



