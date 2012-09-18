# $OpenBSD$

COMMENT =		enlightenment Input/Output Library	
DISTNAME =		eio-1.7.0

SHARED_LIBS +=  eio                       0.0 # 8.0

# GPL2
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += m crypto ssl z
#LIB_DEPENDS =		x11/e17/evas>=1.7

USE_LIBTOOL =		Yes

.include <bsd.port.mk>
