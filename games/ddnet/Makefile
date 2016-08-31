# $OpenBSD: Makefile,v 1.18 2015/12/27 17:56:22 jasper Exp $

# Crashes on strict-alignment archs, see: src/base/system.c:164
ONLY_FOR_ARCHS =	amd64 i386 powerpc

COMMENT =		platform game featuring buggers equipped with weapons

DISTNAME =		ddnet-10.3
CATEGORIES =		games

HOMEPAGE =		https://ddnet.ws/

MASTER_SITES =		https://github.com/ddnet/ddnet/archive/
DISTFILES =		10.3.tar.gz

# BSD-like
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB =		GL GLU SDL2 X11 c freetype m pthread stdc++ z

BUILD_DEPENDS =		devel/bam

LIB_DEPENDS =		audio/opusfile \
			devel/sdl2

MODULES =		lang/python

SUBST_VARS =		CC CXX CFLAGS CXXFLAGS X11BASE

NO_TEST =		Yes

pre-configure:
	@${SUBST_CMD} ${WRKSRC}/src/engine/shared/storage.cpp \
		${WRKSRC}/src/game/client/gameclient.cpp \
		${WRKSRC}/scripts/build.py \
		${WRKSRC}/scripts/compiler.py \
		${WRKSRC}/scripts/font_installer.sh \
		${WRKSRC}/scripts/make_src.py \
		${WRKSRC}/bam.lua
	# Make sure internal zlib can't be picked up
	rm -rf ${WRKSRC}/src/engine/external/zlib

do-build:
	cd ${WRKSRC} && CC=${CC} bam -a -v release wavpack=${LOCALBASE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/DDNet ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/DDNet ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/ddnet
	cd ${WRKSRC}; tar cf - data | tar xf - -C ${PREFIX}/share/ddnet

.include <bsd.port.mk>
