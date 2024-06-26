Buildroot: /home/dbannon/libqt6pas/cbindings/package-text/libqt6pas6-2.2
Name: libqt6pas6
Version: 
Release: 
Summary: Qt6 interface bindings for Pascal
License: LGPLv2
Group: System
Packager: David Bannon <tomboy-ng@bannons.id.au>
URL: https://github.com/davidbannon/libqt6pas

%define _build_id_links none

%define _rpmdir ../
%define _rpmfilename %%{NAME}-%%{VERSION}-%%{RELEASE}.%%{ARCH}.rpm
%define _unpackaged_files_terminate_build 0

%description

Provides interface for Pascal applications, is only
a temp hack until the distributions catch up. It is
only really useful, at present, to people using
Lazarus main, current release versions do not need it.


%files

/usr/%{_lib}/libQt6Pas.so.INSERT_VERSION
/usr/%{_lib}/libQt6Pas.so.6.2
/usr/%{_lib}/libQt6Pas.so.6
%dir "/usr/share/doc/libqt6pas6/"
"/usr/share/doc/libqt6pas6/changelog.gz"
"/usr/share/doc/libqt6pas6/copyright"

%post -p /sbin/ldconfig
%postun -p /sbin/ldconfig

%changelog
* Thu Nov 24 2022 David Bannon <tomboy-ng@bannons.id.au> - INSERT_FULL_VER
- Initial version of the package

