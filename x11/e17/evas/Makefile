# $OpenBSD: Makefile,v 1.20 2011/03/15 19:41:31 jasper Exp $

COMMENT =		EFL canvas API for X
DISTNAME =		evas-1.0.${VERSION}
EPOCH =			3

SHARED_LIBS +=		evas 1.0

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

USE_LIBTOOL =		Yes

WANTLIB += GL X11 Xau Xdamage Xdmcp Xext Xfixes Xrender Xxf86vm cairo croco-0.6
WANTLIB += crypto drm eet eina expat ffi fontconfig freetype fribidi
WANTLIB += gdk_pixbuf-2.0 gif gio-2.0 glib-2.0 gmodule-2.0 gobject-2.0
WANTLIB += gthread-2.0 jpeg m pango-1.0 pangocairo-1.0 pangoft2-1.0 pcre
WANTLIB += pixman-1 png pthread-stubs rsvg-2 ssl tiff xcb xcb-aux xcb-image
WANTLIB += xcb-render xcb-shm xml2 z

MODULES=		devel/gettext

LIB_DEPENDS =		x11/e17/eet>=1.4 \
			graphics/libungif \
			graphics/png \
			graphics/tiff \
			graphics/jpeg \
			graphics/libungif \
			print/freetype \
			devel/fribidi>=0.19.2 \
			x11/gnome/librsvg

# use XCB
CONFIGURE_ARGS =	--disable-doc \
			--enable-gl-xcb \
			--enable-software-xcb

#			--enable-word-cache \
#			--enable-metric-cache \

.ifndef DEBUG
CONFIGURE_ARGS +=	--disable-evas-magic-debug
.endif

# work in progress ...
#src/lib/include/evas_blend_ops.h:12:25: error: immintrin.h: No such file or directory
CONFIGURE_ARGS +=	--disable-cpu-sse3

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include -Wall -Wextra" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib"

FULLARCH =		${MACHINE_ARCH:S/amd64/x86_64/}
SUBST_VARS +=		FULLARCH

.include <bsd.port.mk>
