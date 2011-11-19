# $OpenBSD: Makefile,v 1.18 2011/09/16 12:29:13 espie Exp $

COMMENT =		EFL core event/X abstraction layer
DISTNAME =		ecore-1.1.0

SO_VERSION =		1.1
# NOTE: Must bump minor version if any shlib's are removed from the
# components dir to avoid pkg_add -r issues.
.for _lib in ecore ecore_con ecore_evas ecore_file ecore_imf \
ecore_imf_evas ecore_input ecore_input_evas ecore_ipc ecore_x
SHARED_LIBS +=		${_lib}	${SO_VERSION}
.endfor

# BSD
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES =		devel/gettext

USE_LIBTOOL =		Yes

WANTLIB += X11 X11-xcb Xau Xdmcp c crypto curl eet eina evas expat
WANTLIB += fontconfig freetype fribidi glib-2.0 idn jpeg m pcre pixman-1
WANTLIB += pthread pthread-stubs ssl xcb xcb-atom xcb-aux xcb-composite
WANTLIB += xcb-damage xcb-dpms xcb-event xcb-icccm xcb-image xcb-keysyms
WANTLIB += xcb-property xcb-randr xcb-render xcb-render-util xcb-screensaver
WANTLIB += xcb-shape xcb-shm xcb-sync xcb-xfixes xcb-xinerama xcb-xprint
WANTLIB += xcb-xtest z

#WANTLIB += cares

LIB_DEPENDS =		devel/glib2 \
			net/curl \
			x11/e17/evas>=1.1 \
			devel/fribidi>=0.19.2
#			net/libcares \

CONFIGURE_ARGS =	--disable-doc \
			--disable-gnutls \
			--enable-ecore-x-xcb
#			--enable-cares

# use eina_lock_take instead of EINA_MAIN_LOOP_CHECK_RETURN
# ecore is not thread safe ... not ?
#CONFIGURE_ARGS +=	--enable-thread-safety

.ifdef DEBUG
CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib"
.else
CONFIGURE_ARGS +=	--with-internal-maximum-log-level=2 \
			--disable-debug-threads \
			--disable-ecore-timer-dump
CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib "
.endif

.include <bsd.port.mk>
