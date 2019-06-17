
Debian
====================
This directory contains files used to package VBKd/VBK-qt
for Debian-based Linux systems. If you compile VBKd/VBK-qt yourself, there are some useful files here.

## VBK: URI support ##


VBK-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install VBK-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your VBKqt binary to `/usr/bin`
and the `../../share/pixmaps/VBK128.png` to `/usr/share/pixmaps`

VBK-qt.protocol (KDE)

