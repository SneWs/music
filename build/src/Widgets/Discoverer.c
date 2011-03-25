/* Discoverer.c generated by valac 0.11.7, the Vala compiler
 * generated from Discoverer.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define BEAT_BOX_TYPE_DISCOVERER (beat_box_discoverer_get_type ())
#define BEAT_BOX_DISCOVERER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_DISCOVERER, BeatBoxDiscoverer))
#define BEAT_BOX_DISCOVERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_DISCOVERER, BeatBoxDiscovererClass))
#define BEAT_BOX_IS_DISCOVERER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_DISCOVERER))
#define BEAT_BOX_IS_DISCOVERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_DISCOVERER))
#define BEAT_BOX_DISCOVERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_DISCOVERER, BeatBoxDiscovererClass))

typedef struct _BeatBoxDiscoverer BeatBoxDiscoverer;
typedef struct _BeatBoxDiscovererClass BeatBoxDiscovererClass;
typedef struct _BeatBoxDiscovererPrivate BeatBoxDiscovererPrivate;

struct _BeatBoxDiscoverer {
	GtkWidget parent_instance;
	BeatBoxDiscovererPrivate * priv;
};

struct _BeatBoxDiscovererClass {
	GtkWidgetClass parent_class;
};


static gpointer beat_box_discoverer_parent_class = NULL;

GType beat_box_discoverer_get_type (void) G_GNUC_CONST;
enum  {
	BEAT_BOX_DISCOVERER_DUMMY_PROPERTY
};
BeatBoxDiscoverer* beat_box_discoverer_new (void);
BeatBoxDiscoverer* beat_box_discoverer_construct (GType object_type);


BeatBoxDiscoverer* beat_box_discoverer_construct (GType object_type) {
	BeatBoxDiscoverer * self = NULL;
	self = (BeatBoxDiscoverer*) gtk_widget_new (object_type, NULL);
	return self;
}


BeatBoxDiscoverer* beat_box_discoverer_new (void) {
	return beat_box_discoverer_construct (BEAT_BOX_TYPE_DISCOVERER);
}


static void beat_box_discoverer_class_init (BeatBoxDiscovererClass * klass) {
	beat_box_discoverer_parent_class = g_type_class_peek_parent (klass);
}


static void beat_box_discoverer_instance_init (BeatBoxDiscoverer * self) {
}


GType beat_box_discoverer_get_type (void) {
	static volatile gsize beat_box_discoverer_type_id__volatile = 0;
	if (g_once_init_enter (&beat_box_discoverer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BeatBoxDiscovererClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) beat_box_discoverer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BeatBoxDiscoverer), 0, (GInstanceInitFunc) beat_box_discoverer_instance_init, NULL };
		GType beat_box_discoverer_type_id;
		beat_box_discoverer_type_id = g_type_register_static (GTK_TYPE_WIDGET, "BeatBoxDiscoverer", &g_define_type_info, 0);
		g_once_init_leave (&beat_box_discoverer_type_id__volatile, beat_box_discoverer_type_id);
	}
	return beat_box_discoverer_type_id__volatile;
}



