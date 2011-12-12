# $OpenBSD$

COMMENT =		test and benchmark for the EFL Evas canvas library
DISTNAME =		expedite-1.1.0

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += X11 Xext Xrender c eet eina evas m pthread stdc++ xcb
WANTLIB += xcb-keysyms

LIB_DEPENDS =		x11/e17/evas>=1.1

USE_LIBTOOL =		Yes

.include <bsd.port.mk>
