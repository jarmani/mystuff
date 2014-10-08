# $OpenBSD$

SHARED_ONLY =		Yes

COMMENT =		Tox client library

DISTNAME =		toxcore-20141008

SHARED_LIBS +=	toxav		0.0 # 0.0
SHARED_LIBS +=	toxcore		0.0 # 0.0
SHARED_LIBS +=	toxdns		0.0 # 0.0
SHARED_LIBS +=	toxencryptsave	0.0 # 0.0

CATEGORIES =		net telephony

HOMEPAGE =		http://tox.im/

MAINTAINER =		Jonathan Armani <armani@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c m opus pthread sodium vpx

GH_COMMIT =		3df540118647a995e4fc8d4143783843f6063b07
GH_ACCOUNT =		irungentoo
GH_PROJECT = 		toxcore

MODULES =		gnu

BUILD_DEPENDS +=	${MODGNU_AUTOCONF_DEPENDS} \
			${MODGNU_AUTOMAKE_DEPENDS} \
			devel/check \
			devel/libconfig
			
LIB_DEPENDS +=		audio/opus \
			multimedia/libvpx \
			security/libsodium

USE_LIBTOOL=		gnu
CONFIGURE_STYLE =	gnu
CONFIGURE_ENV =		LDFLAGS=${LDFLAGS} CPPFLAGS=${CPPFLAGS}

TEST_TARGET =		check

AUTOCONF_VERSION =	2.69
AUTOMAKE_VERSION =	1.11

pre-configure:
	cd ${WRKSRC} && AUTOCONF_VERSION=${AUTOCONF_VERSION} \
			AUTOMAKE_VERSION=${AUTOMAKE_VERSION} autoreconf -i

.include <bsd.port.mk>
