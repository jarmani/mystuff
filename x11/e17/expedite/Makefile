# $OpenBSD$

COMMENT =		test and benchmark for the EFL Evas canvas library
DISTNAME =		expedite-1.7.0

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += X11 c eet eina evas m pthread stdc++

LIB_DEPENDS =		x11/e17/evas>=1.7

USE_LIBTOOL =		Yes

.include <bsd.port.mk>
