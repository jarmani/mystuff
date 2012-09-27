# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		sndio mixer API library
DISTNAME =		siomix-0.1
PKGNAME =		${DISTNAME}

SHARED_LIBS +=  siomix                    2.0 

CATEGORIES =		audio

HOMEPAGE =		http://www.sndio.org/

MAINTAINER =		Jonathan Armani <armani@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB =		sndio	

MASTER_SITES =		${HOMEPAGE}

USE_LIBTOOL =		Yes
NO_REGRESS =		Yes

.include <bsd.port.mk>
