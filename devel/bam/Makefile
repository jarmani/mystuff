# $OpenBSD$

# Only for game/teeworlds and game/ddnet
ONLY_FOR_ARCHS =	amd64 i386 powerpc

COMMENT =		fast and flexible build system

DISTNAME =		bam-0.4.0

CATEGORIES =		devel

HOMEPAGE =		http://matricks.github.io/bam/

MAINTAINER =		Jonathan Armani <armani@openbsd.org>

PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		c m pthread

MASTER_SITES =		http://github.com/downloads/matricks/bam/

SUBST_VARS =		CC CXX CFLAGS CXXFLAGS X11BASE

NO_TEST =		Yes

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/make_unix.sh \
		${WRKSRC}/src/driver_gcc.lua \
		${WRKSRC}/src/base.lua

do-build:
	cd ${WRKSRC} && CC=${CC} CFLAGS="${CFLAGS}" /bin/sh -v make_unix.sh

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bam ${PREFIX}/bin

.include <bsd.port.mk>
