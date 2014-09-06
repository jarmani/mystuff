# $OpenBSD: Makefile,v 1.4 2013/03/11 11:41:29 espie Exp $

COMMENT =	userland driver for Dream Link USB LED Message Board

DISTNAME =	dcled-2.2
EXTRACT_SUFX =	.tgz

CATEGORIES =	sysutils

HOMEPAGE =	http://www.last-outpost.com/~malakai/dcled/

MAINTAINER =	Jonathan Armani <armani@openbsd.org>

PERMIT_PACKAGE_CDROM = Yes

MASTER_SITES=	http://www.last-outpost.com/~malakai/dcled/

WANTLIB += c m pthread usb-1.0

LIB_DEPENDS =	devel/libusb1

MAKE_FLAGS =	CC="${CC}" \
		LIBUSB_CFLAGS="`pkg-config --cflags libusb-1.0`" \
		LIBUSB_LIBS="`pkg-config --libs libusb-1.0`"

FAKE_FLAGS =	INSTALLDIR=${WRKINST}${PREFIX}/bin \
		FONTDIR=${WRKINST}${PREFIX}/share/dcled

MAKE_FILE =	makefile

NO_TEST =	Yes

.include <bsd.port.mk>
