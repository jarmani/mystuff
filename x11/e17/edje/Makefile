# $OpenBSD: Makefile,v 1.19 2011/03/15 19:40:04 jasper Exp $

COMMENT =		EFL complex graphical design & layout library
DISTNAME =		edje-1.1.0

SHARED_LIBS +=		edje 1.1

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += X11 X11-xcb c crypto curl ecore ecore_con ecore_evas
WANTLIB += ecore_file ecore_imf ecore_imf_evas ecore_input ecore_input_evas
WANTLIB += ecore_x eet eina embryo evas expat fontconfig freetype fribidi
WANTLIB += glib-2.0 idn jpeg lua m pcre pixman-1 pthread pthread-stubs ssl xcb
WANTLIB += xcb-atom xcb-composite xcb-damage xcb-dpms xcb-event xcb-icccm
WANTLIB += xcb-image xcb-keysyms xcb-property xcb-randr xcb-render
WANTLIB += xcb-render-util xcb-screensaver xcb-shape xcb-shm xcb-sync
WANTLIB += xcb-xfixes xcb-xinerama xcb-xprint xcb-xtest z

#WANTLIB += cares

MODULES =		devel/gettext \
			lang/lua

USE_LIBTOOL =		Yes

BUILD_DEPENDS=		${RUN_DEPENDS}
RUN_DEPENDS=		misc/shared-mime-info>=0.21

LIB_DEPENDS =		x11/e17/ecore>=1.1 \
			x11/e17/embryo>=1.1

CONFIGURE_ARGS =	--disable-doc

.ifndef DEBUG
CONFIGURE_ARGS +=	--enable-amalgamation
.endif

# perf ?
#	--enable-edje-program-cache
#	--enable-edje-calc-cache
#    don't use floating point, for architectures without FPU
#	--enable-fixed-point

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -Wall -Wextra"

.include <bsd.port.mk>
