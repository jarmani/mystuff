# $OpenBSD: Makefile,v 1.20 2011/03/15 19:41:31 jasper Exp $

COMMENT =		EFL canvas API for X
DISTNAME =		evas-1.7.0

EPOCH =			2

SHARED_LIBS +=		evas 1.7

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

USE_LIBTOOL =		Yes


MODULES=		devel/gettext


LIB_DEPENDS =		x11/e17/eet>=1.7 \
			graphics/libungif \
			graphics/png \
			graphics/tiff \
			graphics/jpeg \
			graphics/libungif \
			print/freetype \
			devel/fribidi>=0.19.2 \
			x11/gnome/librsvg

WANTLIB += GL X11 Xdamage Xext Xfixes Xrender Xxf86vm crypto drm
WANTLIB += eet eina expat fontconfig freetype fribidi gif jpeg
WANTLIB += m png pthread ssl stdc++ tiff xcb z

CONFIGURE_ARGS =	--disable-doc

# XXX
# src/lib/include/evas_blend_ops.h:12:25: error: immintrin.h: No such file or directory
CONFIGURE_ARGS +=	--disable-cpu-sse3

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib"

FULLARCH =		${MACHINE_ARCH:S/amd64/x86_64/}
SUBST_VARS +=		FULLARCH OSREV

.include <bsd.port.mk>
