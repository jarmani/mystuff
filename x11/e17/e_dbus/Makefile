# $OpenBSD: Makefile,v 1.9 2011/03/15 19:39:28 jasper Exp $

COMMENT =		EFL DBus component
DISTNAME =		e_dbus-1.7.0

SO_VERSION =		1.7
.for _lib in edbus enotify ehal eofono ebluez eukit
SHARED_LIBS +=		${_lib} ${SO_VERSION}
.endfor
SHARED_LIBS +=		econnman0_7x 2.0

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

USE_LIBTOOL =		Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr 
WANTLIB += Xrender Xss Xtst c crypto dbus-1 ecore ecore_evas ecore_input 
WANTLIB += ecore_input_evas ecore_x eet eina evas expat fontconfig freetype 
WANTLIB += fribidi glib-2.0 jpeg m pcre pthread ssl xcb z

MODULES =		devel/gettext

LIB_DEPENDS =		x11/dbus \
			x11/e17/ecore>=1.7

CONFIGURE_ARGS =	--disable-doc

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
