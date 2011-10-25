# $OpenBSD: Makefile,v 1.9 2010/11/15 19:45:57 espie Exp $

COMMENT=		library implementing the Unicode Bidirectional Algorithm

DISTNAME=		fribidi-0.19.2
SHARED_LIBS +=	fribidi              1.0      # .1.0
CATEGORIES=		devel

HOMEPAGE=		http://fribidi.org

# LGPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=		Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes
WANTLIB=		c

MASTER_SITES=		${HOMEPAGE}/download/

# needed for doc/
USE_GMAKE=			Yes

USE_LIBTOOL=		Yes
CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS+=	${CONFIGURE_SHARED}

.include <bsd.port.mk>
