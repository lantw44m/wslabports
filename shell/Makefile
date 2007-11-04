# New ports collection makefile for:	local/shell
# Date created:				Nov 08 2006
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $FreeBSD$
#

PORTNAME=	shell
PORTVERSION=	1.0.20061108
CATEGORIES=	local
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	rafan@csie.ntu.edu.tw
COMMENT=	Create links for shell

RUN_DEPENDS=	bash:${PORTSDIR}/shells/bash \
		bash-completion>=0:${PORTSDIR}/shells/bash-completion \
		ksh93:${PORTSDIR}/shells/ksh93

NO_BUILD=	yes

do-fetch:
	@${DO_NADA}

do-install:
	@${SETENV} PKG_PREFIX="${PREFIX}" PKG_DESTDIR="${DESTDIR}" \
		${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
