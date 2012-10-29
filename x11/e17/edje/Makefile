# $OpenBSD: Makefile,v 1.79 2011/03/15 19:40:04 jasper Exp $

COMMENT =		EFL complex graphical design & layout library
DISTNAME =		edje-1.7.0

EPOCH =			2

SHARED_LIBS +=		edje 1.7

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr
WANTLIB += Xrender Xss Xtst c crypto curl ecore ecore_con ecore_evas ecore_file
WANTLIB += ecore_imf ecore_imf_evas ecore_input ecore_input_evas ecore_x eet
WANTLIB += eina embryo evas expat fontconfig freetype fribidi glib-2.0 idn jpeg
WANTLIB += m pcre pthread ssl xcb z

#WANTLIB += cares

MODULES =		devel/gettext \
			lang/lua

USE_LIBTOOL =		Yes

BUILD_DEPENDS=		${RUN_DEPENDS}
RUN_DEPENDS=		misc/shared-mime-info>=0.21

LIB_DEPENDS =		x11/e17/ecore>=1.7 \
			x11/e17/embryo>=1.7

CONFIGURE_ARGS =	--disable-doc

#.ifndef DEBUG
#CONFIGURE_ARGS +=	--enable-amalgamation
#.endif

.include <bsd.port.mk>
