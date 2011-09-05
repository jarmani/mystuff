# $OpenBSD$

COMMENT =	send and receive frames from layer 2 to layer 7	

MODULES =	cpan
DISTNAME =	Net-Packet-3.27
CATEGORIES =	net

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# Artistic License 1.0
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

BUILD_DEPENDS =  ${RUN_DEPENDS}

RUN_DEPENDS =	math/p5-Bit-Vector \
		devel/p5-Class-Gomor \
		net/p5-Net-IPv6Addr \
		net/p5-Net-Libdnet \
		net/p5-Net-Write \
		net/p5-Net-Pcap \
		net/p5-Socket6

.include <bsd.port.mk>
