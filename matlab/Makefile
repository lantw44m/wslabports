# New ports collection makefile for:	local/matlab
# Date created:				Apr 26 2006
# Whom:					Rong-En Fan <rafan@infor.org>
#
# $FreeBSD$
#

PORTNAME=	matlab
# set PORTVERSION equal to what matlab says
PORTVERSION=	7.5.0.338 # R2007b
PORTREVISION=	0
CATEGORIES=	local
DISTFILES=

MAINTAINER=	rafan@infor.org
COMMENT=	easier to run MATLAB on FreeBSD

USE_LINUX=	yes

NO_BUILD=	yes

pre-everything::
	@${ECHO} ""
	@${ECHO} "Use ${SCRIPTDIR}/prep.sh to prepare MATLAB first."
	@${ECHO} ""

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/matlab ${PREFIX}/bin

.include <bsd.port.mk>
