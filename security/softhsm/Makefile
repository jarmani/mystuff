# $OpenBSD$

COMMENT =	software PKCS\#11 cryptographic token

DISTNAME =	softhsm-1.3.5

SHARED_LIBS =	softhsm 1.3
SHARED_ONLY =	Yes

CATEGORIES =	security

HOMEPAGE =	http://www.opendnssec.org/softhsm/

MAINTAINER =	Fabien Romano <fabien@openbsd.org>

# BSD
PERMIT_PACKAGE_CDROM=	Yes

WANTLIB += botan-1.10 bz2 c crypto gmp m pthread sqlite3 stdc++ z

MASTER_SITES =	http://dist.opendnssec.org/source/

LIB_DEPENDS =	security/botan

USE_LIBTOOL =		Yes

SEPARATE_BUILD =	Yes

CONFIGURE_STYLE =	gnu
CONFIGURE_ARGS =	${CONFIGURE_SHARED}
CONFIGURE_ARGS +=	--with-botan=${LOCALBASE}

FAKE_FLAGS =		sysconfdir=${PREFIX}/share/examples/softhsm

.include <bsd.port.mk>

#USE_GMAKE =		Yes
