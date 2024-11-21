#!/usr/bin/bash
set -e

# simple script to update the libQt6Pas files on the machine where the
# actual library is built, in my case a Fedora 35 box. It needs to be one
# where the version of Qt6 is 6.2
# No license, use in any way you see fit, David Bannon, 2022-12-17

if [ -e "master.zip" ]; then
	rm master.zip
fi
if [ -d "libqt6pas-master-old" ]; then
	rm -Rf libqt6pas-master-old
fi
ls -ltr
# something strange here, mv does not obay -f as I expect.
wget https://github.com/davidbannon/libqt6pas/archive/refs/heads/master.zip
if [ -d "libqt6pas-master" ]; then
	mv libqt6pas-master libqt6pas-master-old
fi
unzip master.zip
