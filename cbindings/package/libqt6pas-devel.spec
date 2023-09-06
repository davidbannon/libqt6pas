Buildroot: /home/dbannon/libqt6pas/cbindings/package-text/libqt6pas6-2.2
Name: libqt6pas6-devel
Version: 
Release: 
Summary: Qt6 interface bindings for Pascal Devel Package
License: LGPLv2
Packager: David Bannon <tomboy-ng@bannons.id.au>
URL: https://github.com/davidbannon/libqt6pas
Requires: INSERT_DEPEND
Provides: libqt6pas-devel

%define _build_id_links none

%define _rpmdir ../
%define _rpmfilename %%{NAME}-%%{VERSION}-%%{RELEASE}.%%{ARCH}.rpm
%define _unpackaged_files_terminate_build 0

%description
Provides interface for Pascal applications, is only
a temp hack until the distributions catch up. It is
only really useful, at present, to people using
Lazarus main, current release versions do not need it.
Development Package

%files

/usr/%{_lib}/libQt6Pas.so
%dir "/usr/share/doc/libqt6pas6-devel/"
"/usr/share/doc/libqt6pas6-devel/copyright"

%changelog
* Thu Nov 24 2022 David Bannon <tomboy-ng@bannons.id.au> - INSERT_FULL_VER
- Initial version of the package

