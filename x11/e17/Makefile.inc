# $OpenBSD: Makefile.inc,v 1.13 2011/06/02 17:35:47 kili Exp $

CATEGORIES ?=		x11

HOMEPAGE ?=		http://www.enlightenment.org/

MASTER_SITES ?=		http://kernelinvaders.com/e17/

DIST_SUBDIR ?=		e17

CONFIGURE_STYLE ?=	gnu

MAINTAINER ?=		Jonathan Armani <armani@openbsd.org>

NO_REGRESS ?=		Yes

VERSION ?=		999.65428

.ifdef DEBUG
DEBUG +=		-O0 -g
INSTALL_STRIP =
.endif
