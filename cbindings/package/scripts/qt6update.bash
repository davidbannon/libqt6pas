#!/usr/bin/bash
set -e

# Small script to update the git controlled tree of libqt6pas
# it downloads the relevent files (initially only needs Qt6Pas.pro)
# checks version number and if required, updates the relevent files.
# No license, use as you see fit. David Bannon 2022-12-17

GIT_REPO="libqt6pas"
DOWNLOAD="lazarus-main-lcl-interfaces-qt6"
DOWNLOAD_SUBS="lcl/interfaces/qt6"
TAR_FILE="lazarus-main-lcl-interfaces-qt6-cbindings-src.tar.gz"
DOWNFILE=""
# lazarus-main-lcl-interfaces-qt6
if [ "$DOWNLOAD" == "" ]; then
	echo "ERROR - Download dir not defined"
	exit
fi
cd
if [ -e "$TAR_FILE" ]; then
	rm "$TAR_FILE"
	echo "Removing old download"
fi

if [ -d "$DOWNLOAD" ]; then
	rm -Rf "$DOWNLOAD"
	echo "Removing old download dir"
else
	echo "$DOWNLOAD was not found"
fi

wget -O "$TAR_FILE" https://gitlab.com/freepascal.org/lazarus/lazarus/-/archive/main/lazarus-main.tar.gz?path=lcl/interfaces/qt6
tar xzf "$TAR_FILE"
grep VER_PAT "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt6Pas.pro
grep VER_PAT "$GIT_REPO"/cbindings/Qt6Pas.pro

DOWN_VER=`grep VER_PAT "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt6Pas.pro`
GIT_VER=`grep VER_PAT "$GIT_REPO"/cbindings/Qt6Pas.pro`

if [ "$DOWN_VER" != "$GIT_VER" ]; then
	echo "Update required"
	rm -Rf "$GIT_REPO"/cbindings/src
	cp -R "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/src "$GIT_REPO"/cbindings/src
	cp "$DOWNLOAD"/"$DOWNLOAD_SUBS"/qt62.pas "$GIT_REPO"/cbindings/.
	cp "$DOWNLOAD"/"$DOWNLOAD_SUBS"/qt6.pas "$GIT_REPO"/cbindings/.
	cp "$DOWNLOAD"/"$DOWNLOAD_SUBS"/cbindings/Qt6Pas.pro "$GIT_REPO"/cbindings/.
	echo "OK, done, now you go and do the git stuff !"
else
	echo "Update NOT required"
fi

