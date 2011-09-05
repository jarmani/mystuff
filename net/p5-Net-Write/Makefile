# $OpenBSD$

COMMENT =	portable interface to open and send raw data to network

MODULES =	cpan
DISTNAME =	Net-Write-1.05
CATEGORIES =	net

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# Artistic License 1.0
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

BUILD_DEPENDS =  ${RUN_DEPENDS}

RUN_DEPENDS =	devel/p5-Class-Gomor \
		net/p5-Net-Pcap \
		net/p5-Socket6

.include <bsd.port.mk>
