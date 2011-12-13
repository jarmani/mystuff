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

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama
WANTLIB += Xrandr Xrender Xss Xtst c crypto curl eet eina evas
WANTLIB += expat fontconfig freetype fribidi glib-2.0 idn jpeg
WANTLIB += m pcre pthread ssl xcb z

LIB_DEPENDS =		devel/glib2 \
			net/curl \
			x11/e17/evas>=1.1 \
			devel/fribidi>=0.19.2

CONFIGURE_ARGS =	--disable-doc \
			--disable-gnutls

.ifndef DEBUG
CONFIGURE_ARGS +=	--with-internal-maximum-log-level=2 \
			--disable-debug-threads \
			--disable-ecore-timer-dump
.endif

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib "


.include <bsd.port.mk>
