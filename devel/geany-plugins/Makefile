# $OpenBSD$

SHARED_ONLY =	Yes

COMMENT =	a collection of plugins for Geany

DISTNAME =	geany-plugins-1.24

CATEGORIES =	devel

HOMEPAGE =		http://plugins.geany.org/

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	http://plugins.geany.org/geany-plugins/

MODULES =	devel/gettext \
		lang/lua \
		textproc/intltool

USE_X11 =	Yes
USE_GMAKE =	Yes
USE_LIBTOOL =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender atk-1.0 cairo enchant expat ffi fontconfig
WANTLIB += freetype gdk-x11-2.0 gdk_pixbuf-2.0 gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 graphite2 gthread-2.0 gtk-x11-2.0
WANTLIB += gtkspell harfbuzz lua5.1 m pango-1.0 pangocairo-1.0
WANTLIB += pangoft2-1.0 pcre pixman-1 png pthread pthread-stubs
WANTLIB += stdc++ xcb xcb-render xcb-shm z

LIB_DEPENDS =	textproc/enchant \
		textproc/gtkspell \
		x11/gtk+2
RUN_DEPENDS =	devel/desktop-file-utils \
		devel/geany

LIBTOOL_FLAGS =		--tag=disable-static

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		CPPFLAGS="-I${LOCALBASE}/include" \
			LDFLAGS="-L${LOCALBASE}/lib"

post-install:
	rm -f ${PREFIX}/lib/geany/*.la
	rm -f ${PREFIX}/lib/geany-plugins/geanylua/*.la


.include <bsd.port.mk>
