# $OpenBSD$

COMMENT =	a collection of colour schemes for Geany

DISTNAME =	geany-themes-1.22.2

EXTRACT_SUFX =	.tar.bz2

PKG_ARCH = *

CATEGORIES =	devel

HOMEPAGE =	https://github.com/geany/geany-themes/

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

# GPL
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	https://github.com/downloads/codebrainz/geany-themes/

RUN_DEPENDS =	devel/geany



NO_TEST =	Yes

NO_BUILD =	Yes

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/geany/colorschemes/
	${INSTALL_DATA} ${WRKSRC}/colorschemes/*.conf ${PREFIX}/share/geany/colorschemes/

.include <bsd.port.mk>
