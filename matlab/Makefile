# New ports collection makefile for:	local/matlab
# Date created:				Apr 26 2006
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $FreeBSD$
#

PORTNAME=	matlab
# set PORTVERSION equal to what matlab says
PORTVERSION=	7.6.0.324 # R2008a
PORTREVISION=	0
CATEGORIES=	local
DISTFILES=

MAINTAINER=	ta@csie.ntu.edu.tw
COMMENT=	easier to run MATLAB on FreeBSD

USE_LINUX=	yes

NO_BUILD=	yes

pre-everything::
	@${ECHO} ""
	@${ECHO} "Use ${SCRIPTDIR}/prep.sh to prepare MATLAB first."
	@${ECHO} ""

do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/matlab ${PREFIX}/bin
	${MKDIR} -p /compat/linux/usr/local
	${LN} -fs /mnt/freebsd/matlab /compat/linux/usr/local/matlab

.include <bsd.port.mk>
