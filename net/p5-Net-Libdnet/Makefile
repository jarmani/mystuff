# $OpenBSD$

COMMENT =	binding for Dug Song's libdnet

MODULES =	cpan
DISTNAME =	Net-Libdnet-0.95
CATEGORIES =	net

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# BSD License
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

BUILD_DEPENDS =  ${RUN_DEPENDS}

RUN_DEPENDS =	net/libdnet \
		devel/p5-Class-Gomor

CONFIGURE_ARGS += LIBS='-L${LOCALBASE}/lib' INC='-I${LOCALBASE}/include'

.include <bsd.port.mk>
