README
===========



**Unofficial libqt6pas**
========


<sub>Don't edit this markdown file, its generated from the tomboy-ng note.</sub>



**Please Note : Do you actually need these libraries ?  If you are using your distro's packaged Lazarus, you should use your distro's packaged libqt5pas libraries. Only people who build Lazarus from source might need these libraries. Might ? If you use a distro that has recent versions in its repo, you should use them, not the ones here.**



**At last update, the list of distros with suitable libraries include -**

   * **Ubuntu 24.04 or later.**

   * **Fedora 41 or later.**

   * **Any (?) up to date Arch based system.**



Download packaged libraries (Debs, RPMs and a tar ball) for x86_64 from https://github.com/davidbannon/libqt6pas/releases/latest



The packages should work on distributions like Ubuntu 22.04, Fedora 36 and Debian Bookworm or later.  Note that ones like Ubuntu 20.04 for example will not work with these libraries, their official repos do not have  Qt6 or a sufficently up to date Qt6.. In practise, you need a Qt6 6.2.4 and GLibc 2.34 or later. But there are no guarantees folks ! Bookworm appears to have settled on Qt6 6.4.2



Its possible that libraries for pacman and for arm and arm64 will appear here soon.



**libqt6pas** is an interface between a (Qt6) Lazarus application and the Qt6 libraries.  Not all Qt6 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt6_Interface



This is an unofficial copy of the libqt6pas code from the Lazarus Main (aka Trunk, master). It is very new, should be regarded as experimental but does appear to work and is extensivly tested ! At some point in time, the distros will catch up and, if you can, you should use a distro distributed verion of the library. However, its possible that the libraries here will often be ahead of your distro.



The code here will never be ahead of that in the Lazarus trunk but will track it, superficially tested as changes are made to the relevant content in Lazarus Main.



Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, https://gitlab.com/groups/freepascal.org/lazarus/-/issues



Bug reports relating to this repository's **packaging or currency** should be reported here.



**Names and Numbers**
--------


The main library Deb package looks a bit like this - `libqt6pas6_6.2.8-1_amd64.deb and libqt6pas6-dev_6.2.8-1_amd64.deb`

   * The package name is   libqt6pas6

   * The "6_2" indicates its based on Qt6.2 LTS series, works fine with later Qt6 too.

   * The "_8" will indicate later release of the bindings, still with Qt6.2

The "-1" is the usual debian packaging release, I'll increment that if I release new packages with same library.



Note that, in this format, which conforms to the way Debian is packaging Qt6, the '6' appears three times, each refering to the same thing ! I have moved over to this format instead of the one intially used here as I found the earlier one was much harder to get error free rpms. The change of formatting will require, the user, to remove ones in the old format before installing the new format. Sorry.



The library itself, is called `libQt6Pas.so.6.2.8`, note the upper case letters, its a Qt thing apparently. It will normally have symlinks from libQt6Pas.so.6.2 and  libQt6Pas.so.6. If you have the -dev package installed, it will add a symlink from libQt6Pas.so



As almost all users will be using systems with later Qt6 than the origional target 6.2.3 LTS version, I'm now building this on an Ubuntu 22.04 system that uses Qt6 6.2.4. Sorry, this may bite you if you are using an earlier Qt6, if thats the case, sorry, you will need to build it your self.





**Building this Library**
--------


**Updated, Nov 2024**

**(Info for the maintainer.)**



I now build these libraries (for x86-64) on a U20.04 VM to ensure backwards compatibility with glibc. However, U20.04 does not have a suitable Qt6, so, get one from this PPA - http://ppa.launchpad.net/okirby/qt6-backports/ubuntu - a file called /etc/apt/sources.list.d/okirby-ubuntu-qt6-backports-focal.list must contain the following -



    deb http://ppa.launchpad.net/okirby/qt6-backports/ubuntu focal main


Start with a clean U2204.

   * $> sudo apt install qt6-base-dev alien rpm lintian vim devscripts rpmlint // bit over 400Meg

   * $> mkdir ~/LibQt; cd ~/LibQt

   * git clone https://github.com/davidbannon/libqt6pas.git

   * create a ~/.rpmmacro

   * %_signature gpg

   * %_gpg_name David Bannon

   * %__gpg /usr/bin/gpg

   * and make sure the corresponding gpg key is in gpg (in my case ...617741).

   * note that on U2204, I needed to set path to the gpg binary with TWO underscores, not one like other lines ??



If already setup.



   * $> cd ~/LibQt/libqt6pas/cbindings/scripts

   * $> bash ./qt6update.bash           # this will update your repo directly from the official master if necessary

   * $> cd ../../

   * $> qmake6; make                   # wait a long time

   * $> cd package

   * update the whatsnew file

   * $> EMAIL=YOU@your.email  bash ./package-lib   #  (I use the <tb>@<*.id.au> one



Then push code up to this git repo, create a new release page, assign a new (but uncreated) tag, upload the new libraries and release.



**Ref**
--------
   * https://opensource.com/article/18/9/how-build-rpm-packages

   * https://launchpad.net/~okirby/+archive/ubuntu/qt6-backports   // get Qt6 6.2.2 on Ubuntu 20.04







**Legacy Information**
--------


**Most of this no longer applies, its here just in case its helpful.**

Most of this no longer applies, its here just in case its helpful.Right now, seems the only way to make a generic library package is to make the Library on a Fedora 35 box and then package on an Ubuntu 20.04 box. This is because

   * Fedora 35 has the older Qt6 6.2.3 that the interface is based on. If built on a later Qt6, then the earlier end user systems will not be supported.

   * The box where its packaged needs to be a deb based one, but not a newer eg Ubuntu because Ubuntu now has a dpkg that uses zstd compression and Debian's dpkg cannot read that.



**The Build  - Fedora 35**

 So, its necessary to build the library on, in my case, a Fedora 35 VM, install qt6-qtbase-devel 6.2.3, pulldown the github files and -



wget https://github.com/davidbannon/libqt6pas/archive/refs/heads/master.zip

// unzip the above somewhere

    cd libqt6pas-master/cbindings
    qmake6 -query   // just to have a look
    qmake6   // to build the Makefile
    make     // build the library, slow !


Then copy the resulting library back somewhere where it can be used on build the debs, for me that my U2204m VM.



**The Package - Ubuntu 20.04**



    Setup - sudo apt install qt6-base-dev alien rpm lintian, vim  // bit over 400Meg
    Setup - a git controlled repo from github.com/davidbannon/libqt6pas


    cp <The newly built library> libqt6pas-master/cbindings/.
    cd libqt6pas-master/cbindings/package
    // edit PACKVER in script, '1' if new release, inc if repackage
    ./package-lib   // Make debs, RPMs and tarball


Upload the packages, do the git stuff !





**Another Approach**
--------
By using an experimental PPA we can install Qt6.2.2 (not 6.2.3) on a U2004 so, avoid the dreaded libc and get a Qt6 almost exactly as Zeljko want. So far, seems to work. This model is a credit to **salvadorbs** who worked out how to do this as a github action.

   * Build a U2004 VM, bring it up to date

   * Add the Qt6.2.2 PPA -

   * sudo add-apt-repository ppa:okirby/qt6-backports; sudo apt update;

    * sudo apt install qt6-base-dev build-essential libgl1-mesa-dev rpm lintian devscripts vim

   * Then, pull down (or refresh) a git copy of this repo into ~/Pascal  (ie /home/$USER/Pascal/libqt6pas)

   * Run the script,  qt6update.bash in the above, ~/Pascal/cbindings/package/scripts directory from the user's home dir. This will update the ~/Pascal/libqt6pas source tree (if necessary).

   * cd down into the ~/Pascal/libqt6pas/cbindings and run qmake6; make to build the library, slow !

   * cd down into packages and run the script package-lib, it should build the packages for you.



Now, push the changes you made to the source earlier back up to github, create a new release page and give it an appropriate version tag. Upload the files, the tag will be created when the release is published.








