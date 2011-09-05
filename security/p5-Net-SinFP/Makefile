# $OpenBSD$

COMMENT =	a full operating system stack fingerprinting suite  

MODULES =	cpan
DISTNAME =	Net-SinFP-2.09
CATEGORIES =	security

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# Artistic License 1.0
PERMIT_PACKAGE_CDROM =		Yes
PERMIT_PACKAGE_FTP =		Yes
PERMIT_DISTFILES_CDROM =	Yes
PERMIT_DISTFILES_FTP =		Yes

BUILD_DEPENDS =  ${RUN_DEPENDS}

RUN_DEPENDS =	devel/p5-Class-Gomor \
		net/p5-Net-Packet \
		net/p5-Net-Packet-Target \
		databases/p5-DBIx-SQLite-Simple

.include <bsd.port.mk>
