#include <gtk-3.0/gtk/gtk.h>

int main(int argc, char *argv[]){

				/*All widgets declearation*/
				GtkWidget *window;
				GtkWidget *vbox;
				GtkWidget *menubar;
				GtkWidget *fileMenu;
				GtkWidget *imprMenu;
				GtkWidget *sep;
				GtkWidget *fileMi;
				GtkWidget *imprMi;
				GtkWidget *feedMi;
				GtkWidget *bookMi;
				GtkWidget *mailMi;
				GtkWidget *quitMi;

				/*initialization of GTK window*/
				gtk_init(&argc , &argv);

				/*parent window creation*/
				window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
				gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);
				gtk_window_set_default_size(GTK_WINDOW(window),300,200);
				gtk_window_set_title(GTK_WINDOW(window),"Sub Menu Example");

				/*VBox is a container that organizes child widgets into a single column*/
				vbox = gtk_vbox_new(FALSE,0);
				gtk_container_add(GTK_CONTAINER(window),vbox);

				/*Creating Menubar*/
				menubar = gtk_menu_bar_new();

				/*Creating File menu*/
				fileMenu = gtk_menu_new();
				fileMi   = gtk_menu_item_new_with_label("File");

				/*Createing Another SubMenu*/
				imprMenu = gtk_menu_new();
				imprMi   = gtk_menu_item_new_with_label("Import");
				feedMi   = gtk_menu_item_new_with_label("Import News Feed...");
				bookMi   = gtk_menu_item_new_with_label("Import bookmarks...");
				mailMi   = gtk_menu_item_new_with_label("Import Mail ....");

				/*Createing Sub Menu*/
				gtk_menu_item_set_submenu(GTK_MENU_ITEM(imprMi),imprMenu);
				/*appending with the submenu*/
				gtk_menu_shell_append(GTK_MENU_SHELL(imprMenu),feedMi);
				gtk_menu_shell_append(GTK_MENU_SHELL(imprMenu),bookMi);
				gtk_menu_shell_append(GTK_MENU_SHELL(imprMenu),mailMi);
				/*A Separator*/
				sep = gtk_separator_menu_item_new();
				/*New Menu item*/
				quitMi = gtk_menu_item_new_with_label("Quit");
				
				/*Creating file Submenu*/
				gtk_menu_item_set_submenu(GTK_MENU_ITEM(fileMi),fileMenu);
				/*append in the fileMenu*/
				gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu),imprMi);
				gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu),sep);
				gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu),quitMi);

				gtk_menu_shell_append(GTK_MENU_SHELL(menubar),fileMi);

				gtk_box_pack_start(GTK_BOX(vbox),menubar,FALSE,FALSE,0);

				g_signal_connect(G_OBJECT(window),"destroy",G_CALLBACK(gtk_main_quit),NULL);
				g_signal_connect(G_OBJECT(quitMi),"activate",G_CALLBACK(gtk_main_quit),NULL);

				gtk_widget_show_all(window);

				gtk_main();

				return 0;
}
