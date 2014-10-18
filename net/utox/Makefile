# $OpenBSD$

COMMENT =		lightweight Tox client

DISTNAME =		utox-20141018

CATEGORIES =		net telephony

HOMEPAGE =		http://utox.org/

MAINTAINER =		Jonathan Armani <armani@openbsd.org>

# GPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += X11 Xext Xrender c dbus-1 fontconfig freetype m openal
WANTLIB += opus pthread sodium toxav toxcore toxdns toxencryptsave
WANTLIB += vpx z

GH_COMMIT =		cf14faad8c1c15536712593b14188eb6d749c0c3
GH_ACCOUNT =		notsecure
GH_PROJECT = 		uTox


LIB_DEPENDS +=		audio/openal \
			audio/opus \
			multimedia/libvpx \
			net/toxcore \
			x11/dbus \


USE_GMAKE = 		Yes
NO_TEST =		Yes

.include <bsd.port.mk>
