# $OpenBSD: Makefile,v 1.77 2011/03/15 19:41:00 jasper Exp $

COMMENT =		EFL implementations of freedesktop.org specifications
DISTNAME =		efreet-1.7.0

EPOCH =			2

SO_VERSION =		1.7
# NOTE: Must bump minor version if any shlib's are removed from the
# components dir to avoid pkg_add -r issues.
.for _lib in efreet efreet_mime efreet_trash
SHARED_LIBS +=		${_lib} ${SO_VERSION}
.endfor

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

WANTLIB += c crypto curl ecore ecore_con ecore_file eet eina glib-2.0 idn
WANTLIB += jpeg m pcre pthread ssl z

MODULES =		devel/gettext

LIB_DEPENDS =		x11/e17/ecore>=1.7

USE_LIBTOOL =		Yes

CONFIGURE_ARGS =	--disable-doc

.include <bsd.port.mk>
