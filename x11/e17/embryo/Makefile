# $OpenBSD: Makefile,v 1.10 2011/03/15 19:41:17 jasper Exp $

COMMENT =		EFL C like scripting language
DISTNAME =		embryo-1.1.0

SHARED_LIBS +=		embryo 1.1

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MODULES =		converters/libiconv
LIB_DEPENDS =		x11/e17/eina>=1.1

WANTLIB += c eina m pthread

USE_LIBTOOL =		Yes

CONFIGURE_ARGS =	--disable-doc

.include <bsd.port.mk>
