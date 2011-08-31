# $OpenBSD: Makefile,v 1.3 2010/07/09 09:37:37 jakemsr Exp $

COMMENT =		game based on the Sonic the Hedgehog universe

DISTNAME =		lugaru
PKGNAME =		lugaru-1
CATEGORIES=		games

HOMEPAGE =		http://www.wolfire.com/lugaru/
MASTER_SITES =		http://www.secu-info.org/tmp/

# GPLv2 or later
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM= Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES =		devel/cmake

WANTLIB =		c ogg m pthread vorbis vorbisfile SDL GL GLU ICE SM X11 Xext stdc++ z png openal jpeg

LIB_DEPENDS =		::audio/libvorbis \
			::devel/sdl \
			::graphics/png \
			::graphics/jpeg \
			::audio/openal

NO_REGRESS=	Yes

.include <bsd.port.mk>
