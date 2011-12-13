# $OpenBSD: Makefile,v 1.7 2011/03/06 21:35:41 jasper Exp $

COMMENT =		EFL API for data types
DISTNAME =		eina-1.1.0

SHARED_LIBS +=		eina 1.1

# LGPL v2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += m

MODULES =		converters/libiconv

USE_LIBTOOL =		Yes

CONFIGURE_ARGS =	--disable-doc

.ifdef DEBUG
CONFIGURE_ARGS +=	--enable-stringshare-usage
.else
CONFIGURE_ARGS +=	--with-internal-maximum-log-level=2 \
			--disable-debug-threads \
			--disable-magic-debug \
			--disable-safety-checks \
			--disable-assert \
			--enable-amalgamation
.endif

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
