# New ports collection makefile for:	local/w3m-config
# Date created:				Apr 20 2006
# Whom:					Rong-En Fan <rafan@infor.org>
#
# $FreeBSD$
#

PORTNAME=	w3m-config
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	local
DISTFILES=

MAINTAINER=	rafan@infor.org
COMMENT=	www/w3m configuration files

RUN_DEPENDS=	w3m:${PORTSDIR}/www/w3m-m17n

NO_BUILD=	yes

do-install:
	${MKDIR} ${PREFIX}/etc/w3m
	${INSTALL_DATA} ${FILESDIR}/w3mconfig ${PREFIX}/etc/w3m

.include <bsd.port.mk>
