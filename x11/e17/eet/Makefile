# $OpenBSD: Makefile,v 1.16 2011/03/15 19:40:40 jasper Exp $

COMMENT =		EFL library to write an set of chunks of data to a file
DISTNAME =		eet-1.7.0

SHARED_LIBS +=		eet 1.7

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += c crypto eina jpeg m pthread ssl z

MODULES =		converters/libiconv

LIB_DEPENDS =		x11/e17/eina>=1.7 \
			graphics/jpeg

USE_LIBTOOL =		Yes

CONFIGURE_ARGS =	--disable-doc \
			--disable-gnutls

#.ifndef DEBUG
#CONFIGURE_ARGS +=	--disable-assert \
#			--enable-amalgamation
#.endif

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib"

.include <bsd.port.mk>
