# New ports collection makefile for:	local/217-homelink
# Date created:				Nov 13 2007
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $Id$
#

PORTNAME=	homelink
PORTVERSION=	1.0.20071113
CATEGORIES=	local
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	rafan@csie.ntu.edu.tw
COMMENT=	Create home links

NO_BUILD=	yes

do-fetch:
	@${DO_NADA}

do-install:
	@${SETENV} PKG_PREFIX="${PREFIX}" PKG_DESTDIR="${DESTDIR}" \
		${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
