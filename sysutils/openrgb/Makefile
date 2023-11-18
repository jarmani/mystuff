
COMMENT =	RGB lighting control that doesn't depend on manufacturer software

DISTNAME =	OpenRGB-release_0.9
# PKGNAME defaults to DISTNAME unless changed
PKGNAME =	openrgb-0.9
#PKGNAME-foo =	???	for multi packages

GL_ACCOUNT = CalcProgrammer1
GL_PROJECT = OpenRGB
GL_TAGNAME = release_0.9


#
# On source code hosting platforms use static tarballs over generated ones.
# It's easy to distinguish between them on github, gitlab and codeberg by
# looking at the file URL:
# /releases/ -> preferred. Use SITES and DISTNAME.
# /archive/ -> use DIST_TUPLE (use only if there is no release version).
#
# platform: codeberg, github, gitlab, kde, srht, gnome
# account: usually the account or organisation name
# project: the project or repository name
# id: either a tag name or commit hash.
#   Tag names with standard tag formats, like 1.0.1 or v1.0, set an
#   appropriate PKGNAME automatically. Otherwise, set it yourself.
#   "make show=PKGNAMES" will help identify if that's needed.
#   For a commit hash, use the full hash (not shortened), and set PKGNAME.
# subdir: usually ".", otherwise the extracted files are moved to another
#   directory under WRKDIST. Mostly useful for git submodules.
#DIST_TUPLE =	platform account project id subdir

# for any port that creates shared libraries.
# both libtool and cmake automatically set filenames based on this variable.
# for libtool- or cmake-based ports, have a look at WRKBUILD/shared_libs.log
#SHARED_LIBS =	???	0.0

CATEGORIES =	sysutils

HOMEPAGE =	https://openrgb.org

MAINTAINER =		Jonathan Armani <armani@openbsd.org>

# GPLv2
PERMIT_PACKAGE =	Yes
PERMIT_DISTFILES =	Yes

# If pledge is used, annotate with `uses pledge()' in a comment

# "make port-lib-depends-check" can help
#WANTLIB =		???

# where the source files and patches can be fetched
#
SITES =		https://gitlab.com/${GL_ACCOUNT}/${GL_PROJECT}/-/archive/${GL_TAGNAME}/
DISTFILES =	${GL_PROJECT}-${GL_TAGNAME}.tar.gz

# for grabbing DISTFILES from SITES.sufx
#DISTFILES.sufx = ...
#EXTRACT_ONLY =		???

# Needs to be specified if tarball does not end with .tar.gz
#EXTRACT_SUFX =		.tar.bz2

# Fix dos line-endings in files needing patches
#FIX_CRLF_FILES =	???

# Optional subdirectory of DISTDIR where distfiles and patches will be placed
#DIST_SUBDIR =		???

# use PATCHFILES.sufx for going to SITES.sufx
#PATCHFILES =		???
#PATCH_DIST_STRIP =	-p0

# Standard for C++ ports:
#COMPILER =		base-clang ports-gcc base-gcc
# Standard for C++11 or newer:
#COMPILER =		base-clang ports-gcc
# Ports that require a non-default compiler that do *not* use C++ should set this:
#COMPILER_LANGS =	c

# Any modules we may be using
MODULES =		x11/qt5 \
			devel/qmake

#
# MODPY_ settings for when using lang/python module
#
# Get source from pypi.org
#MODPY_PI =		Yes
#MODPY_PYBUILD =	setuptools
#			or flit_core, hatchling, etc - see python-module(5)
#
# If port is a Python module (py-*) that is or might be used by other Python
# ports, set FLAVOR=python3 and FLAVORS=python3

#
# MODGO_ settings for when using lang/go module
#
# Get source from proxy.golang.org
#MODGO_MODULES =	modulename version
# These are needed for dependency resolution. We don't actually need the
# corresponding code.
#MODGO_MODFILES =	modulename version

# Dependencies
BUILD_DEPENDS =	security/polarssl \
		comms/libhidapi \
		devel/libusb1
#RUN_DEPENDS =		???
#LIB_DEPENDS =		???
#TEST_DEPENDS =		???

#MAKE_FLAGS =		???
#MAKE_ENV =		???
#FAKE_FLAGS =		???
#TEST_FLAGS =		???

# build/configuration variables
#
#SEPARATE_BUILD =	Yes (build in a directory other than WRKSRC)
#USE_GMAKE =		Yes
#USE_GROFF =		Yes
# Programs that require GNU libtool to build instead of the OpenBSD one
# should use this option. Add a comment explaining why. Don't use this if
# a port requires libtool's .m4 files but otherwise can use OpenBSD libtool,
# in that case use "BUILD_DEPENDS=devel/libtool" instead.
#USE_LIBTOOL=		gnu
# Set CONFIGURE_STYLE to value corresponding to some standard configuration
#	  perl [modbuild]: perl's MakeMaker Makefile.PL (modbuild: perl's
#	  Module::Build Build.PL)
#	  gnu [autoconf] [old] [dest]: gnu style configure (old: no
#	  sysconfdir), (dest: add DESTDIR, does not handle it),
#	  autoconf: run autoconf to regenerate configure script. implies gnu.
#	            (see also "do-gen" target below).
#	XXX: cygnus products do NOT use autoconf for making the main
#		configure from configure.in
#	  imake [noman]: port uses imake for configuration.
#	  (noman: no man page installation)
#	  simple: port has its own configure script
#	  none: override default CONFIGURE_STYLE coming from a module
#	        (needed for some ports using lang/python, etc.)
#CONFIGURE_STYLE =	
#CONFIGURE_SCRIPT =	??? (if other than configure)
#CONFIGURE_ARGS =	???
#CONFIGURE_ENV =	???

# if debug packages are a good idea, extra configure args may be necessary
# and DEBUG_PACKAGES will commonly be set to ${BUILD_PACKAGES}
#DEBUG_CONFIGURE_ARGS =	???
#DEBUG_PACKAGES = ${BUILD_PACKAGES}

NO_TEST =		Yes

# Overrides for default values
#
#CFLAGS =		???
#LDFLAGS =		???
#MAKE_FILE =		???
#PKG_ARCH =		??? (* for arch-independent packages)
#WRKDIST =		??? if other than ${WRKDIR}/${DISTNAME}
#WRKSRC =		??? if other than ${WRKDIST}
#WRKBUILD =		??? if other than ${WRKSRC}
#WRKCONF =		??? if other than ${WRKBUILD}

#ALL_TARGET =		???
#INSTALL_TARGET =	???
#TEST_TARGET =		???

.include <bsd.port.mk>
