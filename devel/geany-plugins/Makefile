# $OpenBSD$

SHARED_ONLY =	Yes

COMMENT =	plugins for Geany

DISTNAME =	geany-plugins-0.19

CATEGORIES =	devel

HOMEPAG E=	http://plugins.geany.org/

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =	http://plugins.geany.org/geany-plugins/

MODULES =	devel/gettext \
		textproc/intltool

USE_X11 =	Yes
USE_GMAKE =	Yes
USE_LIBTOOL =	Yes

WANTLIB += X11 Xau Xcomposite Xcursor Xdamage Xdmcp Xext Xfixes Xi Xinerama 
WANTLIB += Xrandr Xrender atk-1.0 c cairo enchant expat fontconfig freetype 
WANTLIB += gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0 glitz gmodule-2.0 
WANTLIB += gobject-2.0 gthread-2.0 gtk-x11-2.0 gtkspell lua m pango-1.0 
WANTLIB += pangocairo-1.0 pangoft2-1.0 pcre pixman-1 png pthread pthread-stubs 
WANTLIB += stdc++ xcb xcb-render xcb-render-util xml2 z 

LIB_DEPENDS =	::lang/lua \
		::textproc/enchant \
		::textproc/gtkspell \
		::x11/gtk+2
RUN_DEPENDS =	:desktop-file-utils-*:devel/desktop-file-utils

CONFIGURE_STYLE = gnu


.include <bsd.port.mk>
