# $OpenBSD$

COMMENT =	SSH2 protocol library

MODPY_EGG_VERSION = 1.7.8
DISTNAME =	ssh-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

CATEGORIES =	security

HOMEPAGE =	http://pypi.python.org/pypi/ssh

# LGPL
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM = Yes
PERMIT_DISTFILES_FTP =	Yes

MASTER_SITES =	${MASTER_SITE_PYPI:=s/ssh/}

MODULES =	lang/python

MODPY_SETUPTOOLS = Yes 

RUN_DEPENDS =   security/py-crypto
NO_REGRESS =    Yes

.include <bsd.port.mk>
