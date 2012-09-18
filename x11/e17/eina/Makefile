# $OpenBSD: Makefile,v 1.7 2011/03/06 21:35:41 jasper Exp $

COMMENT =		EFL API for data types
DISTNAME =		eina-1.7.0

SHARED_LIBS +=		eina 1.7

# LGPL v2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += m pthread

MODULES =		converters/libiconv

USE_LIBTOOL =		Yes

CONFIGURE_ARGS =	--disable-doc


CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
