#include <gtk/gtk.h>

int main(int argc, char *argv[]){
	GtkWidget *window; /*GtkWidget is the baseclass that all widgets in GTK+ derived*/
	gtk_init(&argc, &argv); /*gtk_init function initialize the gtk*/

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);/*gtk_window_new function creats a new GtkWindow*/
	gtk_widget_show(window);/*display the widget*/

	g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);/*signal to a particular object*/

	gtk_main();/*the main loop*/

	return 0;
}

