# $OpenBSD$

COMMENT =		cryptographic store accessible through PKCS#11 interface

DISTNAME =		softhsm-1.3.0
CATEGORIES =		security

HOMEPAGE =		http://www.opendnssec.org/softhsm/

MAINTAINER =		Fabien Romano <fabien@openbsd.org>

# LGPL v2.1
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =		http://www.opendnssec.org/files/source/

CONFIGURE_STYLE =	gnu

NO_REGRESS =		Yes

LIB_DEPENDS =		security/botan \
			databases/sqlite3

WANTLIB += c m pthread stdc++ botan-1.10 sqlite3

CONFIGURE_ENV +=	LDFLAGS="${LDFLAGS} -lpthread "

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/softhsm
	@cd ${WRKSRC} && ${INSTALL_DATA} *.conf \
	  ${PREFIX}/share/examples/softhsm

.include <bsd.port.mk>
