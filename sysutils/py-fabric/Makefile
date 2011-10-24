# $OpenBSD$

COMMENT = 		simple pythonic remote deployment tool

MODPY_EGG_VERSION = 	1.3.0
DISTNAME = 		fabric-${MODPY_EGG_VERSION}
PKGNAME = 		py-${DISTNAME}
CATEGORIES = 		devel

HOMEPAGE = 		http://fabfile.org/

MAINTAINER = 		Jonathan Armani <dbd@asystant.net>

# LGPL
PERMIT_PACKAGE_CDROM = 	Yes
PERMIT_PACKAGE_FTP = 	Yes
PERMIT_DISTFILES_CDROM = Yes
PERMIT_DISTFILES_FTP = 	Yes

MASTER_SITES = 	http://kernelinvaders.com/tmp/

MODULES = 	lang/python

MODPY_SETUPTOOLS = Yes

RUN_DEPENDS = 	security/py-paramiko
NO_REGRESS =	Yes

.include <bsd.port.mk>
