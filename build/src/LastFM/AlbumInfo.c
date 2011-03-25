/* AlbumInfo.c generated by valac 0.11.7, the Vala compiler
 * generated from AlbumInfo.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <stdio.h>
#include <libxml/parser.h>
#include <libxml/tree.h>


#define LAST_FM_TYPE_ALBUM_INFO (last_fm_album_info_get_type ())
#define LAST_FM_ALBUM_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfo))
#define LAST_FM_ALBUM_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfoClass))
#define LAST_FM_IS_ALBUM_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_ALBUM_INFO))
#define LAST_FM_IS_ALBUM_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_ALBUM_INFO))
#define LAST_FM_ALBUM_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfoClass))

typedef struct _LastFMAlbumInfo LastFMAlbumInfo;
typedef struct _LastFMAlbumInfoClass LastFMAlbumInfoClass;
typedef struct _LastFMAlbumInfoPrivate LastFMAlbumInfoPrivate;

#define LAST_FM_TYPE_IMAGE (last_fm_image_get_type ())
#define LAST_FM_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_IMAGE, LastFMImage))
#define LAST_FM_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_IMAGE, LastFMImageClass))
#define LAST_FM_IS_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_IMAGE))
#define LAST_FM_IS_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_IMAGE))
#define LAST_FM_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_IMAGE, LastFMImageClass))

typedef struct _LastFMImage LastFMImage;
typedef struct _LastFMImageClass LastFMImageClass;

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

struct _LastFMAlbumInfo {
	GObject parent_instance;
	LastFMAlbumInfoPrivate * priv;
};

struct _LastFMAlbumInfoClass {
	GObjectClass parent_class;
};

struct _LastFMAlbumInfoPrivate {
	gchar* _name;
	gchar* _artist;
	gchar* _mbid;
	gchar* _url;
	gchar* _releasedate;
	gint _listeners;
	gint _playcount;
	LastFMImage* _url_image;
	GeeArrayList* _tags;
	LastFMTag* tagToAdd;
};


static gpointer last_fm_album_info_parent_class = NULL;

GType last_fm_album_info_get_type (void) G_GNUC_CONST;
GType last_fm_image_get_type (void) G_GNUC_CONST;
GType last_fm_tag_get_type (void) G_GNUC_CONST;
#define LAST_FM_ALBUM_INFO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LAST_FM_TYPE_ALBUM_INFO, LastFMAlbumInfoPrivate))
enum  {
	LAST_FM_ALBUM_INFO_DUMMY_PROPERTY,
	LAST_FM_ALBUM_INFO_NAME,
	LAST_FM_ALBUM_INFO_ARTIST,
	LAST_FM_ALBUM_INFO_MBID,
	LAST_FM_ALBUM_INFO_URL,
	LAST_FM_ALBUM_INFO_RELEASEDATE,
	LAST_FM_ALBUM_INFO_LISTENERS,
	LAST_FM_ALBUM_INFO_PLAYCOUNT,
	LAST_FM_ALBUM_INFO_URL_IMAGE
};
#define LAST_FM_ALBUM_INFO_api "a40ea1720028bd40c66b17d7146b3f3b"
LastFMAlbumInfo* last_fm_album_info_new_basic (void);
LastFMAlbumInfo* last_fm_album_info_construct_basic (GType object_type);
LastFMImage* last_fm_image_new_basic (void);
LastFMImage* last_fm_image_construct_basic (GType object_type);
void last_fm_album_info_set_url_image (LastFMAlbumInfo* self, LastFMImage* value);
LastFMAlbumInfo* last_fm_album_info_new_with_info (const gchar* artist, const gchar* album);
LastFMAlbumInfo* last_fm_album_info_construct_with_info (GType object_type, const gchar* artist, const gchar* album);
gchar* last_fm_core_fix_for_url (const gchar* fix);
LastFMAlbumInfo* last_fm_album_info_new_with_doc (xmlDoc* doc);
LastFMAlbumInfo* last_fm_album_info_construct_with_doc (GType object_type, xmlDoc* doc);
static void last_fm_album_info_parse_node (LastFMAlbumInfo* self, xmlNode* node, const gchar* parent);
LastFMImage* last_fm_image_new_with_url (const gchar* url, gboolean generate);
LastFMImage* last_fm_image_construct_with_url (GType object_type, const gchar* url, gboolean generate);
LastFMImage* last_fm_album_info_get_url_image (LastFMAlbumInfo* self);
void last_fm_image_set_size (LastFMImage* self, gint width, gint height);
LastFMTag* last_fm_tag_new (void);
LastFMTag* last_fm_tag_construct (GType object_type);
void last_fm_tag_set_tag (LastFMTag* self, const gchar* value);
void last_fm_tag_set_url (LastFMTag* self, const gchar* value);
void last_fm_album_info_addTag (LastFMAlbumInfo* self, LastFMTag* t);
void last_fm_album_info_addTagString (LastFMAlbumInfo* self, const gchar* t);
LastFMTag* last_fm_tag_new_with_string (const gchar* tag);
LastFMTag* last_fm_tag_construct_with_string (GType object_type, const gchar* tag);
GeeArrayList* last_fm_album_info_tags (LastFMAlbumInfo* self);
GeeArrayList* last_fm_album_info_tagStrings (LastFMAlbumInfo* self);
const gchar* last_fm_tag_get_tag (LastFMTag* self);
LastFMAlbumInfo* last_fm_album_info_new (void);
LastFMAlbumInfo* last_fm_album_info_construct (GType object_type);
const gchar* last_fm_album_info_get_name (LastFMAlbumInfo* self);
void last_fm_album_info_set_name (LastFMAlbumInfo* self, const gchar* value);
const gchar* last_fm_album_info_get_artist (LastFMAlbumInfo* self);
void last_fm_album_info_set_artist (LastFMAlbumInfo* self, const gchar* value);
const gchar* last_fm_album_info_get_mbid (LastFMAlbumInfo* self);
void last_fm_album_info_set_mbid (LastFMAlbumInfo* self, const gchar* value);
const gchar* last_fm_album_info_get_url (LastFMAlbumInfo* self);
void last_fm_album_info_set_url (LastFMAlbumInfo* self, const gchar* value);
const gchar* last_fm_album_info_get_releasedate (LastFMAlbumInfo* self);
void last_fm_album_info_set_releasedate (LastFMAlbumInfo* self, const gchar* value);
gint last_fm_album_info_get_listeners (LastFMAlbumInfo* self);
void last_fm_album_info_set_listeners (LastFMAlbumInfo* self, gint value);
gint last_fm_album_info_get_playcount (LastFMAlbumInfo* self);
void last_fm_album_info_set_playcount (LastFMAlbumInfo* self, gint value);
static void last_fm_album_info_finalize (GObject* obj);
static void _vala_last_fm_album_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_last_fm_album_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


LastFMAlbumInfo* last_fm_album_info_construct_basic (GType object_type) {
	LastFMAlbumInfo * self = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	GeeArrayList* _tmp2_ = NULL;
	LastFMImage* _tmp3_ = NULL;
	LastFMImage* _tmp4_;
	self = (LastFMAlbumInfo*) g_object_new (object_type, NULL);
	_tmp0_ = g_strdup ("Unkown Album");
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	_tmp1_ = g_strdup ("Unkown Artist");
	_g_free0 (self->priv->_artist);
	self->priv->_artist = _tmp1_;
	_tmp2_ = gee_array_list_new (LAST_FM_TYPE_TAG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	_g_object_unref0 (self->priv->_tags);
	self->priv->_tags = _tmp2_;
	_tmp3_ = last_fm_image_new_basic ();
	_tmp4_ = _tmp3_;
	last_fm_album_info_set_url_image (self, _tmp4_);
	_g_object_unref0 (_tmp4_);
	return self;
}


LastFMAlbumInfo* last_fm_album_info_new_basic (void) {
	return last_fm_album_info_construct_basic (LAST_FM_TYPE_ALBUM_INFO);
}


LastFMAlbumInfo* last_fm_album_info_construct_with_info (GType object_type, const gchar* artist, const gchar* album) {
	LastFMAlbumInfo * self = NULL;
	gchar* _tmp0_ = NULL;
	gchar* album_fixed;
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
	g_return_val_if_fail (album != NULL, NULL);
	_tmp0_ = last_fm_core_fix_for_url (album);
	album_fixed = _tmp0_;
	_tmp1_ = last_fm_core_fix_for_url (artist);
	artist_fixed = _tmp1_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=album.getinfo&api_key=" LAST_FM_ALBUM_INFO_api "&artist=", artist_fixed, NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = g_strconcat (_tmp3_, "&album=", NULL);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_strconcat (_tmp5_, album_fixed, NULL);
	_tmp7_ = _tmp6_;
	_g_free0 (_tmp5_);
	_g_free0 (_tmp3_);
	url = _tmp7_;
	fprintf (stdout, "Parsing album info.\n");
	_tmp8_ = xmlParseFile (url);
	doc = _tmp8_;
	self = (LastFMAlbumInfo*) last_fm_album_info_construct_with_doc (object_type, doc);
	_g_free0 (url);
	_g_free0 (artist_fixed);
	_g_free0 (album_fixed);
	return self;
}


LastFMAlbumInfo* last_fm_album_info_new_with_info (const gchar* artist, const gchar* album) {
	return last_fm_album_info_construct_with_info (LAST_FM_TYPE_ALBUM_INFO, artist, album);
}


LastFMAlbumInfo* last_fm_album_info_construct_with_doc (GType object_type, xmlDoc* doc) {
	LastFMAlbumInfo * self = NULL;
	xmlNode* _tmp0_ = NULL;
	xmlNode* root;
	self = (LastFMAlbumInfo*) last_fm_album_info_construct_basic (object_type);
	_g_object_unref0 (self->priv->tagToAdd);
	self->priv->tagToAdd = NULL;
	if (doc == NULL) {
		fprintf (stderr, "Could not get album info. \n");
		return self;
	}
	_tmp0_ = xmlDocGetRootElement (doc);
	root = _tmp0_;
	if (root == NULL) {
		xmlFreeDoc (doc);
		fprintf (stderr, "The xml file is empty. \n");
		return self;
	}
	last_fm_album_info_parse_node (self, root, "");
	xmlFreeDoc (doc);
	return self;
}


LastFMAlbumInfo* last_fm_album_info_new_with_doc (xmlDoc* doc) {
	return last_fm_album_info_construct_with_doc (LAST_FM_TYPE_ALBUM_INFO, doc);
}


/** recursively parses the nodes in a xml doc and also calls parse_properties
 * @param node The node to parse
 * @param parent the parent node
 */
static void last_fm_album_info_parse_node (LastFMAlbumInfo* self, xmlNode* node, const gchar* parent) {
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
				gchar* _tmp17_;
				gchar* _tmp18_;
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
				if (g_strcmp0 (parent, "album") == 0) {
					if (g_strcmp0 (node_name, "name") == 0) {
						gchar* _tmp3_;
						_tmp3_ = g_strdup (node_content);
						_g_free0 (self->priv->_name);
						self->priv->_name = _tmp3_;
					} else {
						if (g_strcmp0 (node_name, "artist") == 0) {
							gchar* _tmp4_;
							_tmp4_ = g_strdup (node_content);
							_g_free0 (self->priv->_artist);
							self->priv->_artist = _tmp4_;
						} else {
							if (g_strcmp0 (node_name, "mbid") == 0) {
								gchar* _tmp5_;
								_tmp5_ = g_strdup (node_content);
								_g_free0 (self->priv->_mbid);
								self->priv->_mbid = _tmp5_;
							} else {
								if (g_strcmp0 (node_name, "url") == 0) {
									gchar* _tmp6_;
									_tmp6_ = g_strdup (node_content);
									_g_free0 (self->priv->_url);
									self->priv->_url = _tmp6_;
								} else {
									if (g_strcmp0 (node_name, "releasedate") == 0) {
										gchar* _tmp7_;
										_tmp7_ = g_strdup (node_content);
										_g_free0 (self->priv->_releasedate);
										self->priv->_releasedate = _tmp7_;
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
											} else {
												if (g_strcmp0 (node_name, "image") == 0) {
													gchar* _tmp10_ = NULL;
													gchar* _tmp11_;
													gboolean _tmp12_;
													_tmp10_ = xmlGetProp (iter, "size");
													_tmp11_ = _tmp10_;
													_tmp12_ = g_strcmp0 (_tmp11_, "large") == 0;
													_g_free0 (_tmp11_);
													if (_tmp12_) {
														LastFMImage* _tmp13_ = NULL;
														LastFMImage* _tmp14_;
														LastFMImage* _tmp15_ = NULL;
														_tmp13_ = last_fm_image_new_with_url (node_content, TRUE);
														_tmp14_ = _tmp13_;
														last_fm_album_info_set_url_image (self, _tmp14_);
														_g_object_unref0 (_tmp14_);
														_tmp15_ = last_fm_album_info_get_url_image (self);
														last_fm_image_set_size (_tmp15_, 500, 500);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				} else {
					if (g_strcmp0 (parent, "albumtoptagstag") == 0) {
						if (g_strcmp0 (node_name, "name") == 0) {
							LastFMTag* _tmp16_ = NULL;
							if (self->priv->tagToAdd != NULL) {
								gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_tags, self->priv->tagToAdd);
							}
							_tmp16_ = last_fm_tag_new ();
							_g_object_unref0 (self->priv->tagToAdd);
							self->priv->tagToAdd = _tmp16_;
							last_fm_tag_set_tag (self->priv->tagToAdd, node_content);
						} else {
							if (g_strcmp0 (node_name, "url") == 0) {
								last_fm_tag_set_url (self->priv->tagToAdd, node_content);
							}
						}
					}
				}
				_tmp17_ = g_strconcat (parent, node_name, NULL);
				_tmp18_ = _tmp17_;
				last_fm_album_info_parse_node (self, iter, _tmp18_);
				_g_free0 (_tmp18_);
				_g_free0 (node_content);
				_g_free0 (node_name);
			}
		}
	}
}


void last_fm_album_info_addTag (LastFMAlbumInfo* self, LastFMTag* t) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (t != NULL);
	gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->_tags, t);
}


void last_fm_album_info_addTagString (LastFMAlbumInfo* self, const gchar* t) {
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


GeeArrayList* last_fm_album_info_tags (LastFMAlbumInfo* self) {
	GeeArrayList* result = NULL;
	GeeArrayList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = _g_object_ref0 (self->priv->_tags);
	result = _tmp0_;
	return result;
}


GeeArrayList* last_fm_album_info_tagStrings (LastFMAlbumInfo* self) {
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


LastFMAlbumInfo* last_fm_album_info_construct (GType object_type) {
	LastFMAlbumInfo * self = NULL;
	self = (LastFMAlbumInfo*) g_object_new (object_type, NULL);
	return self;
}


LastFMAlbumInfo* last_fm_album_info_new (void) {
	return last_fm_album_info_construct (LAST_FM_TYPE_ALBUM_INFO);
}


const gchar* last_fm_album_info_get_name (LastFMAlbumInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_name;
	return result;
}


void last_fm_album_info_set_name (LastFMAlbumInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
	g_object_notify ((GObject *) self, "name");
}


const gchar* last_fm_album_info_get_artist (LastFMAlbumInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_artist;
	return result;
}


void last_fm_album_info_set_artist (LastFMAlbumInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_artist);
	self->priv->_artist = _tmp0_;
	g_object_notify ((GObject *) self, "artist");
}


const gchar* last_fm_album_info_get_mbid (LastFMAlbumInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_mbid;
	return result;
}


void last_fm_album_info_set_mbid (LastFMAlbumInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_mbid);
	self->priv->_mbid = _tmp0_;
	g_object_notify ((GObject *) self, "mbid");
}


const gchar* last_fm_album_info_get_url (LastFMAlbumInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_url;
	return result;
}


void last_fm_album_info_set_url (LastFMAlbumInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_url);
	self->priv->_url = _tmp0_;
	g_object_notify ((GObject *) self, "url");
}


const gchar* last_fm_album_info_get_releasedate (LastFMAlbumInfo* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_releasedate;
	return result;
}


void last_fm_album_info_set_releasedate (LastFMAlbumInfo* self, const gchar* value) {
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_releasedate);
	self->priv->_releasedate = _tmp0_;
	g_object_notify ((GObject *) self, "releasedate");
}


gint last_fm_album_info_get_listeners (LastFMAlbumInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_listeners;
	return result;
}


void last_fm_album_info_set_listeners (LastFMAlbumInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_listeners = value;
	g_object_notify ((GObject *) self, "listeners");
}


gint last_fm_album_info_get_playcount (LastFMAlbumInfo* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_playcount;
	return result;
}


void last_fm_album_info_set_playcount (LastFMAlbumInfo* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_playcount = value;
	g_object_notify ((GObject *) self, "playcount");
}


LastFMImage* last_fm_album_info_get_url_image (LastFMAlbumInfo* self) {
	LastFMImage* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_url_image;
	return result;
}


void last_fm_album_info_set_url_image (LastFMAlbumInfo* self, LastFMImage* value) {
	LastFMImage* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _g_object_ref0 (value);
	_g_object_unref0 (self->priv->_url_image);
	self->priv->_url_image = _tmp0_;
	g_object_notify ((GObject *) self, "url-image");
}


static void last_fm_album_info_class_init (LastFMAlbumInfoClass * klass) {
	last_fm_album_info_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LastFMAlbumInfoPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_last_fm_album_info_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_last_fm_album_info_set_property;
	G_OBJECT_CLASS (klass)->finalize = last_fm_album_info_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_ARTIST, g_param_spec_string ("artist", "artist", "artist", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_MBID, g_param_spec_string ("mbid", "mbid", "mbid", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_URL, g_param_spec_string ("url", "url", "url", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_RELEASEDATE, g_param_spec_string ("releasedate", "releasedate", "releasedate", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_LISTENERS, g_param_spec_int ("listeners", "listeners", "listeners", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_PLAYCOUNT, g_param_spec_int ("playcount", "playcount", "playcount", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), LAST_FM_ALBUM_INFO_URL_IMAGE, g_param_spec_object ("url-image", "url-image", "url-image", LAST_FM_TYPE_IMAGE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void last_fm_album_info_instance_init (LastFMAlbumInfo * self) {
	self->priv = LAST_FM_ALBUM_INFO_GET_PRIVATE (self);
}


static void last_fm_album_info_finalize (GObject* obj) {
	LastFMAlbumInfo * self;
	self = LAST_FM_ALBUM_INFO (obj);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_artist);
	_g_free0 (self->priv->_mbid);
	_g_free0 (self->priv->_url);
	_g_free0 (self->priv->_releasedate);
	_g_object_unref0 (self->priv->_url_image);
	_g_object_unref0 (self->priv->_tags);
	_g_object_unref0 (self->priv->tagToAdd);
	G_OBJECT_CLASS (last_fm_album_info_parent_class)->finalize (obj);
}


GType last_fm_album_info_get_type (void) {
	static volatile gsize last_fm_album_info_type_id__volatile = 0;
	if (g_once_init_enter (&last_fm_album_info_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LastFMAlbumInfoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) last_fm_album_info_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LastFMAlbumInfo), 0, (GInstanceInitFunc) last_fm_album_info_instance_init, NULL };
		GType last_fm_album_info_type_id;
		last_fm_album_info_type_id = g_type_register_static (G_TYPE_OBJECT, "LastFMAlbumInfo", &g_define_type_info, 0);
		g_once_init_leave (&last_fm_album_info_type_id__volatile, last_fm_album_info_type_id);
	}
	return last_fm_album_info_type_id__volatile;
}


static void _vala_last_fm_album_info_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	LastFMAlbumInfo * self;
	self = LAST_FM_ALBUM_INFO (object);
	switch (property_id) {
		case LAST_FM_ALBUM_INFO_NAME:
		g_value_set_string (value, last_fm_album_info_get_name (self));
		break;
		case LAST_FM_ALBUM_INFO_ARTIST:
		g_value_set_string (value, last_fm_album_info_get_artist (self));
		break;
		case LAST_FM_ALBUM_INFO_MBID:
		g_value_set_string (value, last_fm_album_info_get_mbid (self));
		break;
		case LAST_FM_ALBUM_INFO_URL:
		g_value_set_string (value, last_fm_album_info_get_url (self));
		break;
		case LAST_FM_ALBUM_INFO_RELEASEDATE:
		g_value_set_string (value, last_fm_album_info_get_releasedate (self));
		break;
		case LAST_FM_ALBUM_INFO_LISTENERS:
		g_value_set_int (value, last_fm_album_info_get_listeners (self));
		break;
		case LAST_FM_ALBUM_INFO_PLAYCOUNT:
		g_value_set_int (value, last_fm_album_info_get_playcount (self));
		break;
		case LAST_FM_ALBUM_INFO_URL_IMAGE:
		g_value_set_object (value, last_fm_album_info_get_url_image (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_last_fm_album_info_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	LastFMAlbumInfo * self;
	self = LAST_FM_ALBUM_INFO (object);
	switch (property_id) {
		case LAST_FM_ALBUM_INFO_NAME:
		last_fm_album_info_set_name (self, g_value_get_string (value));
		break;
		case LAST_FM_ALBUM_INFO_ARTIST:
		last_fm_album_info_set_artist (self, g_value_get_string (value));
		break;
		case LAST_FM_ALBUM_INFO_MBID:
		last_fm_album_info_set_mbid (self, g_value_get_string (value));
		break;
		case LAST_FM_ALBUM_INFO_URL:
		last_fm_album_info_set_url (self, g_value_get_string (value));
		break;
		case LAST_FM_ALBUM_INFO_RELEASEDATE:
		last_fm_album_info_set_releasedate (self, g_value_get_string (value));
		break;
		case LAST_FM_ALBUM_INFO_LISTENERS:
		last_fm_album_info_set_listeners (self, g_value_get_int (value));
		break;
		case LAST_FM_ALBUM_INFO_PLAYCOUNT:
		last_fm_album_info_set_playcount (self, g_value_get_int (value));
		break;
		case LAST_FM_ALBUM_INFO_URL_IMAGE:
		last_fm_album_info_set_url_image (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



