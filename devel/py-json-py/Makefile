# $OpenBSD$

COMMENT = implementation of a JSON reader and writer in Python

MODPY_EGG_VERSION =	3.4
PKGNAME =		py-json-py-${MODPY_EGG_VERSION}
DISTNAME =		json-py-${MODPY_EGG_VERSION:S/./_/}
EXTRACT_SUFX =		.zip
MASTER_SITES =		${MASTER_SITE_SOURCEFORGE:=json-py/}

CATEGORIES=	devel

HOMEPAGE=	http://sourceforge.net/projects/json-py/

MAINTAINER=	Jonathan Armani <armani@openbsd.org>

# LGPL
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES =	lang/python
WRKSRC = 	${WRKDIR}
pre-patch:
	@cp ${FILESDIR}/setup.py ${WRKSRC}/.

.include <bsd.port.mk>
