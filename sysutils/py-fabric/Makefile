# $OpenBSD$

COMMENT = 		simple pythonic remote deployment tool

MODPY_EGG_VERSION = 	1.4.0
DISTNAME = 		Fabric-${MODPY_EGG_VERSION}
PKGNAME = 		py-${DISTNAME:L}
CATEGORIES = 		sysutils

HOMEPAGE = 		http://fabfile.org/

# LGPL
PERMIT_PACKAGE_CDROM = 	Yes
PERMIT_PACKAGE_FTP = 	Yes
PERMIT_DISTFILES_CDROM = Yes
PERMIT_DISTFILES_FTP = 	Yes

MASTER_SITES =  ${MASTER_SITE_PYPI:=F/Fabric/}

MODULES = 	lang/python

MODPY_SETUPTOOLS = Yes

RUN_DEPENDS = 	security/py-ssh
NO_REGRESS =	Yes

.include <bsd.port.mk>
