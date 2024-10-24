  GNU nano 8.2                                                                                         ventana.c                                                                                                   
#include <gtk/gtk.h>

static void on_activate(GtkApplication *app, gpointer user_data) {
    // Crear una nueva ventana
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Ventana con Panel Lateral");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 400);

    // Crear un contenedor de tipo GtkBox horizontal
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_window_set_child(GTK_WINDOW(window), box);

    // Crear un panel lateral izquierdo (GtkBox vertical)
    GtkWidget *sidebar = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

    // Agregar algunos botones al panel lateral
    GtkWidget *button1 = gtk_button_new_with_label("Centro de software");
    GtkWidget *button2 = gtk_button_new_with_label("Aplicaciones");
        GtkWidget *button3 = gtk_button_new_with_label("Aplicaciones Instaladas");
        GtkWidget *button4 = gtk_button_new_with_label("Sistema");
    gtk_box_append(GTK_BOX(sidebar), button1);
    gtk_box_append(GTK_BOX(sidebar), button2);
        gtk_box_append(GTK_BOX(sidebar), button3);
        gtk_box_append(GTK_BOX(sidebar), button4);

    // Crear un área de contenido principal
    GtkWidget *content_area = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    GtkWidget *label = gtk_label_new("Contenido central");
    gtk_box_append(GTK_BOX(content_area), label);

    // Agregar el panel lateral y el área de contenido al contenedor principal
    gtk_box_append(GTK_BOX(box), sidebar);
    gtk_box_append(GTK_BOX(box), content_area);

    // Mostrar todos los widgets
    gtk_widget_show(window);
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("com.example.gtk4", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}




