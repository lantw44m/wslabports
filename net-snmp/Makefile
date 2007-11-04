# New ports collection makefile for:	local/net-snmp
# Date created:				Sep 18 2007
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $FreeBSD$
#

CATEGORIES=	local

MAINTAINER=	rafan@csie.ntu.edu.tw
COMMENT=	net-mgmt/net-snmp local patches

CONFLICTS=	net-snmp-[0-9]*

MASTERDIR=	${.CURDIR}/../../net-mgmt/net-snmp

EXTRA_PATCHES=	${.CURDIR}/files/patch-*

.include "${MASTERDIR}/Makefile"

# XXX
PKGNAME:=	local-${PKGNAME}
