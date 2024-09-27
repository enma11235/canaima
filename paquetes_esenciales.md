=====================Paquetes esenciales del sistema operativo ============================

acl
attr
autoconf
automake
bash
bc
binutils
bison
bzip2
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
gcc
gdbm
gettext
glibc
gmp
gperf
grep
groff
grub
gzip: programs for compressing and decompressing files
  installed programs: 
    *gunzip
    *gzexe
    *gzip
    *uncompress (hard link with gunzip)
    *zcat
    *zcmp
    *zdiff
    *zegrep
    *zfgrep  
    *zforce
    *zless
    *zmore 
    *znew
iana-etc
ineutils
inttool
iproute2: programs for basic and advance IPv4 networking
  installed programs: 
    *bridge
    *ctstat (link to lnstat)
    *genl
    *ifstat
    *ip
    *lnstat
    *nstat
    *routel
    *rtacct
    *rtmon
    *rtmon
    *rtpr
    *rtstat (link to lnstat)
    *ss
    *tc
  installed directories:
    /etc/iproute2
    /usr/lib/tc
    /usr/share/doc/iproute
jinja2
kbd: 
  installed Programs:
    *chvt
    *deallocvt
    *fgconsole
    *getkeycodes
    *kbdinfo
    *kbd_mode
    *kbdrate
    *loadkeys
    *loadunimap
    *mapscrn
    *openvt
    *psfaddtable (link to psfxtable)
    *psfgettable (link to psfxtable)
    *psfstriptable (link to psfxtable)
    *psfxtable
    *setfont
    *setkeycodes
    *setleds
    *setmetamode
    *setvtrgb
    *showconsolefont
    *showkey
    *unicode_start
    *unicode_stop
  installed directories:
    /usr/share/consolefonts
    /usr/share/consoletrans
    /usr/share/keymaps
    /usr/share/doc/kbd
    /usr/share/unimaps
kmod
less
lfs-bootscripts (en realidad no)
libcap
libffi
libpipeline
libtool
libxcrypt
linux
m4
make:
  Programa instalado: make (/usr/bin ?)
man-db
man-pages
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
tar: 
  programa instalado: tar (/usr/bin/tar ?)
  directorio instalado: /usr/share/doc/tar
tcl
tcl documentation
texinfo
time zone data
udev-lfs tarball (en realidad no)
util-linux
vim
wheel
xml
xz utils
zlib
zstd

//parches

bzip2 documentation patch
coreutils internationalization fixes patch
glibc memalign patch
glibc fhs patch
grub upstream fixes patch
kbd backspace/delete fix patch
readline upstream fix patch
sysvinit consolidated patch

#Libraries

[Gcr](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#gcr)  

gsettings-desktop-schemas: contains a collection of GSettings schemas for settings shared by various 
components of a GNOME Desktop.
  installed directory: /usr/include/gsettings-desktop-schemas y /usr/share/GConf/gsettings

libsecret: ontains a GObject based library for accessing the Secret Service API.
installed program: secret-tool
installed library: libsecret-1.so
installed Directories: /usr/include/libsecret-1 and /usr/share/doc/libsecret-0.21.4

rest: contains a library that was designed to make it easier to access web services that
claim to be "RESTful". It includes convenience wrappers for libsoup and libxml to make 
remote usage of the RESTful API easier. 
  installed programs: librest-demo (optional)
  installed libraries: librest-1.0.so and librest-extras-1.0.so
  installed directories: /usr/include/rest-1.0 and /usr/share/gtk-doc/html/rest-1.0

totem-pl-parser:  contains a simple GObject-based library used to parse multiple playlist formats. 
  installed libraries: libtotem-plparser-mini.so and libtotem-plparser.so
  installed directories: /usr/include/totem-pl-parser and /usr/share/gtk-doc/html/totem-pl-parser

vte: contains a virtual terminal widget for GTK applications. 
  installed program: vte-2.91 and vte-2.91-gtk4
  installed libraries: libvte-2.91.so and libvte-2.91-gtk4.so
  installed directories: /usr/include/vte-2.91, /usr/include/vte-2.91-gtk4, and (optional) /usr/share/doc/vte-0.76.4

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

#GNOME Desktop Components

DConf-0.40.0 / DConf-Editor
gnome-backgrounds
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

#GNOME Applications

[Baobab](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#baobab)  
[Brasero](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#brasero)  
[EOG](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#eog)  
[Evince](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#evince)  
[Evolution](https://www.linuxfromscratch.org/blfs/downloads/stable/BLFS-BOOK-12.2-sysv-nochunks.html#evolution)  
File-Roller
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
  

