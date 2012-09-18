# $OpenBSD: Makefile,v 1.29 2011/07/18 19:06:37 naddy Exp $

COMMENT =		EFL enlightened window manager
DISTNAME =		enlightenment-0.16.${VERSION}
EPOCH =			1

# BSD
PERMIT_PACKAGE_CDROM =	Yes
PERMIT_PACKAGE_FTP =	Yes
PERMIT_DISTFILES_CDROM =Yes
PERMIT_DISTFILES_FTP =	Yes

MODULES +=		devel/gettext \
			lang/lua

WANTLIB += X11 Xcomposite Xcursor Xdamage Xext Xfixes Xi Xinerama Xrandr 
WANTLIB += Xrender Xss Xtst c crypto curl dbus-1 econnman0_7x ecore ecore_con 
WANTLIB += ecore_evas ecore_file ecore_imf ecore_imf_evas ecore_input 
WANTLIB += ecore_input_evas ecore_ipc ecore_x edbus edje eet efreet efreet_mime 
WANTLIB += efreet_trash ehal eina embryo enotify eofono evas execinfo expat 
WANTLIB += fontconfig freetype fribidi glib-2.0 idn jpeg m pcre pthread ssl 
WANTLIB += xcb xcb-shape z

LIB_DEPENDS =		x11/e17/edje>=1.7 \
			x11/e17/efreet>=1.7 \
			x11/e17/ecore>=1.7 \
			x11/e17/e_dbus>=1.7 \
			x11/e17/eio>=1.7 \
			devel/libexecinfo

RUN_DEPENDS =		devel/desktop-file-utils

CONFIGURE_ARGS +=	--disable-doc \
			--disable-nls \
			--disable-mount-hal \
			--disable-device-udev \
			--disable-mount-udisks \
			--disable-mixer \
			--disable-bluez \
			--disable-backlight
# Broken configure shit HAVE_ECORE_TXT=TRUE not defined correctly
# does not appear in AM_CONDITIONAL . Usually this means the macro
# was only invoked conditionally.
# This prevent us from disabeling the broken/useless modules in configure
#CONFIGURE_ARGS +=	--disable-battery \
#			--disable-temperature \
#			--disable-cpufreq \
#			--disable-mixer \
#			--disable-conf-theme \
#			--disable-conf-icon-theme
#CONFIGURE_ARGS +=	--disable-nls \
#			--disable-ibar \
#			--disable-dropshadow \
#			--disable-clock \
#			--disable-pager \
#			--disable-battery \
#			--disable-temperature \
#			--disable-cpufreq  \
#			--disable-ibox \
#			--disable-start \
#			--disable-exebuf \
#			--disable-winlist \
#			--disable-fileman \
#			--disable-fileman-opinfo \
#			--disable-wizard \
#			--disable-conf \
#			--disable-conf-wallpaper \
#			--disable-conf-wallpaper2 \
#			--disable-conf-theme \
#			--disable-conf-colors \
#			--disable-conf-intl \
#			--disable-mixer \
#			--with-x \
#			--disable-dependency-tracking

CONFIGURE_ENV +=	CFLAGS="${CFLAGS} -I${LOCALBASE}/include -I${X11BASE}/include" \
			LDFLAGS="${LDFLAGS} -L${LOCALBASE}/lib -L${X11BASE}/lib"

# Needed to properly build static archives.
USE_LIBTOOL =		gnu

# Stupid crap in /src/modules/illume/dicts chokes in regular make.
# Some issue with the "(US)" bit
USE_GMAKE =		Yes

FULLARCH =		${MACHINE_ARCH:S/amd64/x86_64/}
SUBST_VARS +=		FULLARCH OSREV

post-install:
	${INSTALL_PROGRAM} ${FILESDIR}/enlightenment_sys \
		${PREFIX}/lib/enlightenment/utils/

.include <bsd.port.mk>
