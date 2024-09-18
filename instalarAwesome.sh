#modificamos temporalmente el archivo sources.list para agregar el
#repositorio de debian, desde el cual descargaremos las build-tools

REPO_DEBIAN="deb-src http://deb.debian.org/debian testing main non-free non-free-firmware contrib"
SOURCES_LIST="/etc/apt/sources.list"

#Backup del archivo original
cp $SOURCES_LIST $SOURCES_LIST.bak

# Define el repositorio que quieres agregar
REPO_LINE="deb http://example.com/debian stable main"

# Define el archivo de fuentes
SOURCES_LIST="/etc/apt/sources.list"

# Backup del archivo original (opcional, pero recomendado)
cp $SOURCES_LIST $SOURCES_LIST.bak

# Verifica si el repositorio ya está en el archivo
if grep -q "$REPO_LINE" $SOURCES_LIST; then
    echo "El repositorio ya está en $SOURCES_LIST."
else
    # Agrega el repositorio al archivo
    echo "$REPO_LINE" | sudo tee -a $SOURCES_LIST > /dev/null
    echo "Repositorio agregado a $SOURCES_LIST."

    # Actualiza la lista de paquetes
    sudo apt-get update

    # Descargamos las build-tools
	sudo apt build-dep awesome

	#compilamos



    # Eliminar el repositorio después de usarlo
    sudo sed -i "\|$REPO_LINE|d" $SOURCES_LIST
    echo "Repositorio eliminado de $SOURCES_LIST."

    # Actualiza la lista de paquetes nuevamente
    sudo apt-get update
fi

git clone https://github.com/awesomeWM/awesome
cd awesome

make package

sudo dpkg -i awesome-x.y.z.deb

exec awesome
