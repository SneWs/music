/* CellRendererSmartText.c generated by valac 0.11.7, the Vala compiler
 * generated from CellRendererSmartText.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define TYPE_CELL_RENDERER_SMART_TEXT (cell_renderer_smart_text_get_type ())
#define CELL_RENDERER_SMART_TEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_RENDERER_SMART_TEXT, CellRendererSmartText))
#define CELL_RENDERER_SMART_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_RENDERER_SMART_TEXT, CellRendererSmartTextClass))
#define IS_CELL_RENDERER_SMART_TEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_RENDERER_SMART_TEXT))
#define IS_CELL_RENDERER_SMART_TEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_RENDERER_SMART_TEXT))
#define CELL_RENDERER_SMART_TEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_RENDERER_SMART_TEXT, CellRendererSmartTextClass))

typedef struct _CellRendererSmartText CellRendererSmartText;
typedef struct _CellRendererSmartTextClass CellRendererSmartTextClass;
typedef struct _CellRendererSmartTextPrivate CellRendererSmartTextPrivate;

struct _CellRendererSmartText {
	GtkCellRendererText parent_instance;
	CellRendererSmartTextPrivate * priv;
};

struct _CellRendererSmartTextClass {
	GtkCellRendererTextClass parent_class;
};


static gpointer cell_renderer_smart_text_parent_class = NULL;

GType cell_renderer_smart_text_get_type (void) G_GNUC_CONST;
enum  {
	CELL_RENDERER_SMART_TEXT_DUMMY_PROPERTY
};
CellRendererSmartText* cell_renderer_smart_text_new (void);
CellRendererSmartText* cell_renderer_smart_text_construct (GType object_type);


CellRendererSmartText* cell_renderer_smart_text_construct (GType object_type) {
	CellRendererSmartText * self = NULL;
	self = (CellRendererSmartText*) g_object_new (object_type, NULL);
	return self;
}


CellRendererSmartText* cell_renderer_smart_text_new (void) {
	return cell_renderer_smart_text_construct (TYPE_CELL_RENDERER_SMART_TEXT);
}


static void cell_renderer_smart_text_class_init (CellRendererSmartTextClass * klass) {
	cell_renderer_smart_text_parent_class = g_type_class_peek_parent (klass);
}


static void cell_renderer_smart_text_instance_init (CellRendererSmartText * self) {
}


GType cell_renderer_smart_text_get_type (void) {
	static volatile gsize cell_renderer_smart_text_type_id__volatile = 0;
	if (g_once_init_enter (&cell_renderer_smart_text_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CellRendererSmartTextClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cell_renderer_smart_text_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CellRendererSmartText), 0, (GInstanceInitFunc) cell_renderer_smart_text_instance_init, NULL };
		GType cell_renderer_smart_text_type_id;
		cell_renderer_smart_text_type_id = g_type_register_static (GTK_TYPE_CELL_RENDERER_TEXT, "CellRendererSmartText", &g_define_type_info, 0);
		g_once_init_leave (&cell_renderer_smart_text_type_id__volatile, cell_renderer_smart_text_type_id);
	}
	return cell_renderer_smart_text_type_id__volatile;
}



