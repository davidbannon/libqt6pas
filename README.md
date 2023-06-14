README
===========



**Unofficial libqt6pas**
========


<sub>Don't edit this markdown file, its generated from the tomboy-ng note.</sub>



**Please Note :** you probably don't need these files unless you are using Lazarus Main and Qt6. Several LTS distros will not have a viable Qt6 at present.



**NOTE : If you have libraries installed earlier than November 25, 2022, earlier than libqt6pas6_6.2.2-2_amd64.deb then you MUST remove the old before installing the new ones (if and only if you need the new ones). See below section Names and Numbering.**



Download packaged libraries (Debs, RPMs and a tar ball) for x86_64 from https://github.com/davidbannon/libqt6pas/releases/latest



The packages should work on distributions like Ubuntu 21.10, Fedora 35 and RH EL9 and Debian Bookworm.  Note that ones like Ubuntu 20.04 for example will not work with these libraries, their official repos do not have  Qt6. In practise, you need a Qt6 6.2.3 and GLibc 2.34 or later. But there are no guarantees folks ! Bookworm appears to have settled on Qt6 6.4.2



Its possible that libraries for pacman and for arm and arm64 will appear here if there seems a demand.



libqt6pas is an interface between Lazarus and the Qt6 libraries.  Not all Qt6 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt6_Interface



This is an unofficial copy of the libqt6pas code from the Lazarus Main (aka Trunk, master). It is very new, should be regarded as experimental but does appear to work ! At some point in time, the distros will catch up and, if you can, you should use a distro distributed verion of the library. However, its possible that the libraries here will often be ahead of your distro.



The code here will never be ahead of that inthe Lazarus trunk but will track it, superficially tested as changes are made to the relevant content in Lazarus Main.



Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, https://gitlab.com/groups/freepascal.org/lazarus/-/issues



Bug reports relating to this repository's **packaging or currency** should be reported here.



**Names and Numbers**
--------


The main library Deb package looks a bit like this - `libqt6pas6_6.2.0-1_amd64.deb and libqt6pas6-dev_6.2.0-1_amd64.deb`

   * The package name is   libqt6pas6

   * The "6_2" indicates its based on Qt6.2 LTS series, works fine with later Qt6 too.

   * The "_0" will indicate later release of the bindings, still with Qt6.2

The "-1" is the usual debian packaging release, I'll increment that if I release new packages with same library.



Note that, in this format, which conforms to the way Debian is packaging Qt6, the '6' appears three times, each refering to the same thing ! I have moved over to this format instead of the one intially used here as I found the earlier one was much harder to get error free rpms. The change of formatting will require, the user, to remove ones in the old format before installing the new format. Sorry.



The library itself, is called `libQt6Pas.so.6.2.0`, note the upper case letters, its a Qt thing apparently. It will normally have symlinks from libQt6Pas.so.6.2 and  libQt6Pas.so.6. If you have the -dev package installed, it will add a symlink from libQt6Pas.so



Note that in the early release stages of this library, its version number was 6.2.3 (reflecting the exact release it was first built on). That was wrong, you should remove and discard that package. It number conflicts ....



**Repackaging**
--------
OK, we are now on the third packaging of the same library. All to do with version numbers and issues relating to building the library in the correct Linux Distro. Note, it does not matter which distro you **use** it in (as long as its new enough), but it must be **built** on, eg, Fedora 35 (my problem, not yours!).





**Building this Library**
--------
Right now, seems the only way to make a generic library package is to make the Library on a Fedora 35 box and then package on an Ubuntu 20.04 box. This is because

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





**Another Approach, in fact, how its donw now !**
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



Now, push the changes you made to the source earlier back up to github, create a new release page and git it an appropriate version tag. Upload the files.








