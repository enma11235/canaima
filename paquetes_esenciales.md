Nota: esta lita (todavia en construccion) contiene una lista de todos los paquetes "necesarios" para el sistema
Que criterio estoy usando para decidir si un paquete es necesario o no? Bueno, estoy tomando los paquetes de
Linux From Scratch y Beyond Linux From Scratch como necesarios, ya que Linux From Scratch es (eso creo) la distribucion
mas basica que existe.

El objetuvo de esta lista tambien es que sea una referencia para aquellas personas que desean estudiar los paquetes
de Canaima

# paquetes del LFS

acl  
attr  
autoconf  
automake  
bash  
bc  
[binutils](https://www.linuxfromscratch.org/lfs/view/stable/chapter05/binutils-pass1.html)    
bison  
[bzip2](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/bzip2.html)  
check  
coreutils  
dejaGNU  
diffutils  
e2fsprogs  
elfutils  
expat  
expect  
file  
findutils  
flex  
flit-core  
gawk  
[gcc](https://www.linuxfromscratch.org/lfs/view/stable/chapter05/gcc-pass1.html)  
gdbm  
gettext  
[glibc](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/glibc.html)  
gmp  
gperf  
grep  
groff  
grub  
gzip  
iana-etc  
ineutils  
inttool  
iproute2  
jinja2  
kbd  
kmod  
less  
lfs-bootscripts  
libcap  
libffi  
libpipeline  
libtool  
libxcrypt  
linux  
m4  
make  
man-db  
[man-pages](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/man-pages.html)  
markupsafe  
meson  
mpc  
mpfr  
ncurses  
ninja  
openssl  
patch  
perl  
pkgconf  
procps  
psmisc  
python  
python Documentation  
readline  
sed  
shadow  
sysklogd  
systemd  
systemd man pages  
sysvinit  
tar  
tcl  
tcl documentation  
texinfo  
time zone data  
udev-lfs tarball  
util-linux  
vim  
wheel  
xml  
[xz utils](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/xz.html)  
[zlib](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/zlib.html)  
[zstd](https://www.linuxfromscratch.org/lfs/view/stable/chapter08/zstd.html)  

## parches

bzip2 documentation patch  
coreutils internationalization fixes patch  
glibc memalign patch  
glibc fhs patch  
grub upstream fixes patch  
kbd backspace/delete fix patch  
readline upstream fix patch  
sysvinit consolidated patch  

# paquetes del BLFS

# Security

[make-ca]()  
[CrackLib]()  
[cryptsetup]()  
[Cyrus SASL]()  
[GnuPG]()  
[GnuTLS]()  
[GPGME]()  
[iptables]()  
[libcap]()  
[Linux-PAM]()  
[liboauth]()  
[libpwquality]()  
[MIT Kerberos]()  
[Nettle]()  
[NSS]()  
[OpenSSH]()  
[p11-kit]()  
[Polkit]()  
[polkit-gnome]()  
[Shadow]()  
[ssh-askpass]()  
[stunnel]()  
[Sudo]()  
[Tripwire]()  

# File Systems and Disk Management  

[btrfs-progs]()  
[dosfstools]()  
[Fuse]()  
[jfsutils]()  
[LVM2]()  
[mdadm]() 
[btfs-3g-2022]()  
[gptfdisk]()  
[parted]() 
[smartmontools]()  
[sshfs]()  
[xfsprogs]() 

# Packages for UEFI Boot

[efivar-39]()  
[Ed]()  
[Emacs]()  
[Gedit]()  
[JOE]()  
[kate]()  
[Mousepad]()  
[Nano]()  
[Vim]()

# Shells  

[Dash]()  
[Tcsh]()  
[zsh]()  

# Virtualization

[qemu]()  

# General Libraries

[Abseil-cpp]()  
[AppStream]()  
[apstream-glib]()  
[Apr]()  
[Aspell]()  
[boost]()  
[brotli]()  
[CLucene]()  
[dbus-glib]()  
[Double-conversion]()  
[duktape]()  
[enchant]()  
[Exempi]()  
[fftw]()  
[GLib]()  
[GLibmm]()  
[GMime]()  

# gnome

En el contexto de GNOME, los "schemas" son archivos XML utilizados para definir configuraciones de aplicaciones y del sistema. Estos archivos describen las opciones de configuración disponibles para una aplicación específica dentro del entorno GNOME. Cada aplicación puede tener su propio schema, que especifica las preferencias y ajustes que los usuarios pueden modificar a través de herramientas como el editor de configuración de GNOME (gnome-control-center). Estos schemas ayudan a mantener la consistencia y la facilidad de configuración en el entorno de escritorio GNOME.  

# Libraries

[Gcr](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#gcr): El paquete Gcr contiene bibliotecas utilizadas para mostrar certificados y acceder a almacenes de claves. También proporciona el visor para archivos criptográficos en el escritorio GNOME.  

[gsettings-desktop-schemas](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#gsettings-desktop-schemas): The GSettings Desktop Schemas package contains a collection of GSettings schemas for settings shared by various components of a GNOME Desktop.  

[libsecret](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#libsecret): The libsecret package contains a GObject based library for accessing the Secret Service API.  

[rest](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#rest): contains a library that was designed to make it easier to access web services that claim to be "RESTful". It includes convenience wrappers for libsoup and libxml to make remote usage of the RESTful API easier.  

[totem-pl-parser](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#totem-pl-parser): The Totem PL Parser package contains a simple GObject-based library used to parse multiple playlist formats.  

[VTE](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#vte): 
yelp
geocode-glib
Gjs
gnome-autoar
gnome-desktop
gnome-menus
gnome-online-accounts
Grilo
libgdata
libgee
libgtop
libgweather
libpeas
libshumate
evolution-data-server
Tracker
Tracker-miners
GSound
xdg-desktop-portal-gnome

# GNOME Desktop Components

DConf-0.40.0 / DConf-Editor  

[gnome-backgrounds](): The GNOME Backgrounds package contains a collection of graphics files which can be used as backgrounds in the GNOME Desktop environment. Additionally, the package creates the proper framework and directory structure so that you can add your own files to the collection.  

Gvfs
gexiv
Nautilus
gnome-bluetooth
gnome-keyring
gnome-settings-daemon
Tecla
gnome-control-center
Mutter
gnome-shell
gnome-shell-extensions
gnome-session
gnome-tweaks
gnome-user-docs
Yelp

# GNOME Applications

[Baobab](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#baobab)  
[Brasero](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#brasero)  
[EOG](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#eog)  
[Evince](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#evince)  
[Evolution](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#evolution)  
[File-Roller]()  
gnome-calculator
gnome-color-manager
gnome-connections
gnome-disk-utility
gnome-maps
gnome-nettool
gnome-power-manager
gnome-screenshot
gnome-system-monitor
gnome-terminal
gnome-weather
Gucharmap
Seahorse
Snapshot

=================PROGRAMAS DE USUARIO PARA EL ESCRITORIO GNOME===============================
  

