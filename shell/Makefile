# New ports collection makefile for:	local/shell
# Date created:				Nov 08 2006
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $FreeBSD$
#

PORTNAME=	shell
PORTVERSION=	1.0.20090324
CATEGORIES=	local
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	ta@csie.ntu.edu.tw
COMMENT=	Create links for shell

BUILD_DEPENDS=	bison:${PORTSDIR}/devel/bison
RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash \
		ksh93:${PORTSDIR}/shells/ksh93

NO_BUILD=	yes

do-fetch:
	@${DO_NADA}

do-install:
	@${SETENV} PKG_PREFIX="${PREFIX}" PKG_DESTDIR="${DESTDIR}" \
		${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
