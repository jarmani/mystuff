# $OpenBSD$

COMMENT = Web Application Attack and Audit Framework

VERSION =	1.0-rc3
NAME =		w3af
DISTNAME =	${NAME}-${VERSION}
PKGNAME =	${NAME}-${VERSION:S/-rc3//}
MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=w3af/}
EXTRACT_SUFX =	.tar.bz2

CATEGORIES=	security www

HOMEPAGE=	http://w3af.sourceforge.net/

MAINTAINER=	Jonathan Armani <armani@openbsd.org>

# GPLv2
PERMIT_PACKAGE_CDROM=	Yes
PERMIT_PACKAGE_FTP=	Yes
PERMIT_DISTFILES_CDROM=	Yes
PERMIT_DISTFILES_FTP=	Yes

MODULES =	lang/python

WRKSRC =	${WRKDIR}/${NAME}

post-extract:
.for f in BeautifulSoup.py fpconst-0.7.2 jsonpy nltk nltk_contrib pygoogle \
    pyPdf scapy SOAPpy yaml
	@rm -rf ${WRKSRC}/extlib/${f}
.endfor


.include <bsd.port.mk>
