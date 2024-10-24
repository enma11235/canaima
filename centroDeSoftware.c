#include <gtk/gtk.h>

static void on_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("¡Botón presionado!\n");
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *button;

    gtk_init(&argc, &argv);

    // Crear una nueva ventana
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Aplicación GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 200);

    // Crear un botón
    button = gtk_button_new_with_label("Presiona aquí");

    // Conectar la señal del botón a la función de callback
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);

    // Conectar la señal para cerrar la ventana
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Agregar el botón a la ventana
    gtk_container_add(GTK_CONTAINER(window), button);

    // Mostrar todo
    gtk_widget_show_all(window);

    // Iniciar el bucle principal de GTK
    gtk_main();

    return 0;
}