# $OpenBSD$

COMMENT =		cryptographic store accessible through PKCS#11 interface

DISTNAME =		softhsm-1.3.0
SHARED_LIBS=		softhsm	1.3

CATEGORIES =		security

HOMEPAGE =		http://www.opendnssec.org/softhsm/

MAINTAINER =		Fabien Romano <fabien@openbsd.org>

# LGPL v2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += botan-1.10 bz2 c crypto gmp m pthread sqlite3 stdc++ z

MASTER_SITES =		http://www.opendnssec.org/files/source/

LIB_DEPENDS =		security/botan \
			databases/sqlite3

USE_LIBTOOL =		Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ENV +=	LDFLAGS="${LDFLAGS} -lpthread "

NO_REGRESS =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/softhsm
	@cd ${WRKSRC} && ${INSTALL_DATA} *.conf \
	  ${PREFIX}/share/examples/softhsm
	@cd ${WRKINST} && rm -rf etc/*.conf*

.include <bsd.port.mk>
