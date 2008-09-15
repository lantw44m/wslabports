# New ports collection makefile for:	local/217
# Date created:				Nov 10 2006
# Whom:					Rong-En Fan <rafan@csie.ntu.edu.tw>
#
# $FreeBSD$
#

PORTNAME=	217
PORTVERSION=	2008.09.15
PORTREVISION=	0
CATEGORIES=	local
MASTER_SITES=	#
DISTFILES=	#

MAINTAINER=	ta@csie.ntu.edu.tw
COMMENT=	Meta-port for all Packages in 217

LIB_DEPENDS=
RUN_DEPENDS=

NO_BUILD=	yes

PKG_CURRENT=	/tmp/pkg.current
PKG_LISTED=	/tmp/pkg.listed

USE_PYTHON=	yes

.include <bsd.port.pre.mk>

# System
RUN_DEPENDS+=	LPRng>=0:${PORTSDIR}/sysutils/LPRng \
		pkg_rmleaves>=0:${PORTSDIR}/ports-mgmt/pkg_rmleaves \
		portconf>=0:${PORTSDIR}/ports-mgmt/portconf \
		portupgrade:${PORTSDIR}/ports-mgmt/portupgrade \
		smartmontools>=0:${PORTSDIR}/sysutils/smartmontools \
		sudo>=0:${PORTSDIR}/security/sudo \
		sshit>=0:${PORTSDIR}/security/sshit \
		portaudit>=0:${PORTSDIR}/ports-mgmt/portaudit \
		net-snmp>=0:${PORTSDIR}/net-mgmt/net-snmp \
		nagios-plugins>=0:${PORTSDIR}/net-mgmt/nagios-plugins \
		nsca-client>=0:${PORTSDIR}/net-mgmt/nsca-client \
		mbmon:${PORTSDIR}/sysutils/mbmon \
		xmbmon:${PORTSDIR}/sysutils/xmbmon \
		chkrootkit:${PORTSDIR}/security/chkrootkit \
		rsync:${PORTSDIR}/net/rsync \
		omnitty:${PORTSDIR}/net/omnitty \
		portlint:${PORTSDIR}/ports-mgmt/portlint \
		porttools>=0:${PORTSDIR}/ports-mgmt/porttools \
		zh-screen>=0:${PORTSDIR}/chinese/screen \
		zh-big5width>=0:${PORTSDIR}/chinese/big5width \
		p5-Mail-Sender>=0:${PORTSDIR}/mail/p5-Mail-Sender \
		bsdsar>=0:${PORTSDIR}/sysutils/bsdsar

RUN_DEPENDS+=	compat4x-i386>=0:${PORTSDIR}/misc/compat4x \
		compat5x-${ARCH}>=0:${PORTSDIR}/misc/compat5x \
		compat6x-${ARCH}>=0:${PORTSDIR}/misc/compat6x

# Network
RUN_DEPENDS+=	trafshow:${PORTSDIR}/net/trafshow \
		mtr:${PORTSDIR}/net/mtr \
		lrzsz>=0:${PORTSDIR}/comms/lrzsz

# Shell
RUN_DEPENDS+=	local-shell>=0:${PORTSDIR}/local/shell

# Language / Compiler
.if ${ARCH} == "i386"
RUN_DEPENDS+=	mit-scheme>=0:${PORTSDIR}/lang/mit-scheme 
.endif
RUN_DEPENDS+=	gcc42:${PORTSDIR}/lang/gcc42 \
		clisp:${PORTSDIR}/lang/clisp \
		expect:${PORTSDIR}/lang/expect \
		f2c:${PORTSDIR}/lang/f2c \
		ocaml:${PORTSDIR}/lang/ocaml \
		perl:${PORTSDIR}/lang/perl5.8 \
		python:${PORTSDIR}/lang/python \
		ruby:${PORTSDIR}/lang/ruby18 \
		tcl>=8.4:${PORTSDIR}/lang/tcl84

# Java
RUN_DEPENDS+=	diablo-jdk>=0:${PORTSDIR}/java/diablo-jdk16
.if ${ARCH} == "i386"
#RUN_DEPENDS+=	java3d>=0:${PORTSDIR}/java/java3d
.endif

# Development
RUN_DEPENDS+=	svn:${PORTSDIR}/devel/subversion \
		svk:${PORTSDIR}/devel/svk \
		p5-VCP-Dest-svk>=0:${PORTSDIR}/devel/p5-VCP-Dest-svk \
		ddd:${PORTSDIR}/devel/ddd \
		swig>=1.3:${PORTSDIR}/devel/swig13 \
		global:${PORTSDIR}/devel/global \
		ctags>=0:${PORTSDIR}/devel/ctags \
		cscope>=0:${PORTSDIR}/devel/cscope \
		ccache>=0:${PORTSDIR}/devel/ccache \
		distcc>=0:${PORTSDIR}/devel/distcc \
		doxygen>=0:${PORTSDIR}/devel/doxygen \
		cmake>=0:${PORTSDIR}/devel/cmake

# Archiver
RUN_DEPENDS+=	rar:${PORTSDIR}/archivers/rar \
		zh-unrar>=0:${PORTSDIR}/chinese/unrar \
		zh-unzip>=0:${PORTSDIR}/chinese/unzip

# spelling, dictionary
RUN_DEPENDS+=	ispell:${PORTSDIR}/textproc/ispell \
		dict:${PORTSDIR}/textproc/dict

# security related
RUN_DEPENDS+=	gpg:${PORTSDIR}/security/gnupg \
		keychain:${PORTSDIR}/security/keychain

# Math, Science Computing
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}numeric>=0:${PORTSDIR}/math/py-numeric \
		octave:${PORTSDIR}/math/octave \
		gsl>=0:${PORTSDIR}/math/gsl \
		${PYTHON_PKGNAMEPREFIX}gsl>=0:${PORTSDIR}/math/py-gsl \
		fftw>=0:${PORTSDIR}/math/fftw \
		fftw3>=0:${PORTSDIR}/math/fftw3 \
		atlas>=0:${PORTSDIR}/math/R \
		local-matlab>=0:${PORTSDIR}/local/matlab \
		mpich>=0:${PORTSDIR}/net/mpich

# Biology
RUN_DEPENDS+=	p5-bioperl>=0:${PORTSDIR}/biology/p5-bioperl \
		ncbi-toolkit>=0:${PORTSDIR}/biology/ncbi-toolkit

# Entertainment
RUN_DEPENDS+=	nethack:${PORTSDIR}/games/nethack34 \
		qkmj>=0:${PORTSDIR}/games/qkmj

# Perl libraries
RUN_DEPENDS+=	p5-IO-All>=0:${PORTSDIR}/devel/p5-IO-All \
		p5-WWW-Mechanize>=0:${PORTSDIR}/www/p5-WWW-Mechanize \
		p5-WWW-Mechanize-Shell>=0:${PORTSDIR}/www/p5-WWW-Mechanize-Shell \
		p5-WWW-Robot>=0:${PORTSDIR}/www/p5-WWW-Robot \
		perltidy>=0:${PORTSDIR}/devel/perltidy \
		p5-Set-IntSpan>=0:${PORTSDIR}/math/p5-Set-IntSpan \
		p5-Set-Window>=0:${PORTSDIR}/math/p5-Set-Window \
		p5-Set-Infinite>=0:${PORTSDIR}/devel/p5-Set-Infinite \
		p5-Array-IntSpan>=0:${PORTSDIR}/misc/p5-Array-IntSpan \
		p5-XML-SAX-Expat>=0:${PORTSDIR}/textproc/p5-XML-SAX-Expat \
		p5-PAR>=0:${PORTSDIR}/devel/p5-PAR

# Python libraries
.if ${ARCH} == "i386"
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}psyco>=0:${PORTSDIR}/devel/py-psyco
.endif

# database
USE_MYSQL=	yes
RUN_DEPENDS+=	p5-DBD-mysql>=0:${PORTSDIR}/databases/p5-DBD-mysql \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-BerkeleyDB>=0:${PORTSDIR}/databases/p5-BerkeleyDB \
		${PYTHON_PKGNAMEPREFIX}MySQLdb>=0:${PORTSDIR}/databases/py-MySQLdb

# Converters
RUN_DEPENDS+=	recode:${PORTSDIR}/converters/recode \
		unix2dos:${PORTSDIR}/converters/unix2dos

# Other Tools
RUN_DEPENDS+=	tidy:${PORTSDIR}/www/tidy \
		mc:${PORTSDIR}/misc/mc \
		gnuls:${PORTSDIR}/misc/gnuls \
		spim:${PORTSDIR}/emulators/spim

# X Window
RUN_DEPENDS+=	xorg>=0:${PORTSDIR}/x11/xorg \
		xorg-vfbserver>=0:${PORTSDIR}/x11-servers/xorg-vfbserver \
		wdm:${PORTSDIR}/local/wdm

# Fonts
RUN_DEPENDS+=	freefonts>=0:${PORTSDIR}/x11-fonts/freefonts \
		terminus-font>=0:${PORTSDIR}/x11-fonts/terminus-font \
		urwfonts>=0:${PORTSDIR}/x11-fonts/urwfonts \
		webfonts>=0:${PORTSDIR}/x11-fonts/webfonts \
		zh-kcfonts>=0:${PORTSDIR}/chinese/kcfonts \
		zh-arphicttf>=0:${PORTSDIR}/chinese/arphicttf \
		${LOCALBASE}/share/fonts/TrueType/fireflysung.ttf:${PORTSDIR}/chinese/fireflyttf \
		zh-mingunittf>=0:${PORTSDIR}/chinese/mingunittf

# Window Manager / Desktop Environment
RUN_DEPENDS+=	gnome2-lite>=0:${PORTSDIR}/x11/gnome2-lite \
		wmaker:${PORTSDIR}/local/windowmaker \
		enlightenment>=0:${PORTSDIR}/x11-wm/enlightenment \
		icewm:${PORTSDIR}/local/icewm \
		fvwm>=2.5:${PORTSDIR}/x11-wm/fvwm2-devel

# Input Method
RUN_DEPENDS+=	oxim:${PORTSDIR}/chinese/oxim \
		gcin:${PORTSDIR}/chinese/gcin \
		zh-scim-chewing>=0:${PORTSDIR}/chinese/scim-chewing \
		zh-scim-pinyin>=0:${PORTSDIR}/chinese/scim-pinyin \
		zh-scim-tables>=0:${PORTSDIR}/chinese/scim-tables

# Terminal
RUN_DEPENDS+=	rxvt:${PORTSDIR}/local/rxvt-devel \
		urxvt:${PORTSDIR}/x11/rxvt-unicode \
		mlterm:${PORTSDIR}/local/mlterm

# Browser
RUN_DEPENDS+=	firefox:${PORTSDIR}/www/firefox \
		w3m-m17n>=0:${PORTSDIR}/www/w3m-m17n \
		local-w3m-config>=0:${PORTSDIR}/local/w3m-config \
		lynx>=0:${PORTSDIR}/www/lynx \
		swfdec-plugin>=0:${PORTSDIR}/www/swfdec-plugin \
		nspluginwrapper>=0:${PORTSDIR}/www/nspluginwrapper

# Editor
USE_EMACS=	yes
EMACS_PORT_NAME?=	emacs22
RUN_DEPENDS+=	openoffice.org-alllangs>=0:${PORTSDIR}/editors/openoffice.org-2 \
		zh-xemacs-mule>=0:${PORTSDIR}/chinese/xemacs21 \
		xemacs-packages>=0:${PORTSDIR}/editors/xemacs-packages \
		emacs-w3m-${EMACS_PORT_NAME}>=0:${PORTSDIR}/www/emacs-w3m \
		auctex-${EMACS_PORT_NAME}>=0:${PORTSDIR}/print/auctex \
		python-mode.el>=0:${PORTSDIR}/lang/python-mode.el \
		psvn-${EMACS_PORT_NAME}>=0:${PORTSDIR}/devel/psvn \
		vim:${PORTSDIR}/editors/vim \
		local-joe>=0:${PORTSDIR}/local/joe

# LaTeX
RUN_DEPENDS+=	teTeX>=0:${PORTSDIR}/print/teTeX \
		latex-cjk>=0:${PORTSDIR}/print/latex-cjk \
		latex2html>=0:${PORTSDIR}/textproc/latex2html \
		hugelatex>=0:${PORTSDIR}/print/hugelatex \
		Hyperlatex>=0:${PORTSDIR}/print/hyperlatex \
		bibtool:${PORTSDIR}/textproc/bibtool \
		latex-pgf>=0:${PORTSDIR}/print/latex-pgf

# PostScript tools
RUN_DEPENDS+=	zh-bg5ps>=0:${PORTSDIR}/chinese/bg5ps \
		zh-enscript-a4>=0:${PORTSDIR}/chinese/enscript \
		a2ps-a4>=0:${PORTSDIR}/print/a2ps-a4 \
		c2ps-a4>=0:${PORTSDIR}/print/c2ps-a4 \
		mpage>=0:${PORTSDIR}/print/mpage \
		pstotext>=0:${PORTSDIR}/print/pstotext \
		psutils-a4>=0:${PORTSDIR}/print/psutils-a4

# Viewer
RUN_DEPENDS+=	acroread8>=0:${PORTSDIR}/print/acroread8 \
		xpdf>=0:${PORTSDIR}/graphics/xpdf \
		zh-xpdf>=0:${PORTSDIR}/chinese/xpdf \
		gv>=0:${PORTSDIR}/print/gv \
		wv>=0:${PORTSDIR}/textproc/wv \
		djvulibre-nox11>=0:${PORTSDIR}/graphics/djvulibre-nox11 \
		xchm>=0:${PORTSDIR}/deskutils/xchm

# Image Tools
USE_SDL=	yes
RUN_DEPENDS+=	bmeps>=0:${PORTSDIR}/graphics/bmeps \
		gimp:${PORTSDIR}/graphics/gimp \
		gqview>=0:${PORTSDIR}/graphics/gqview \
		gtksee>=0:${PORTSDIR}/graphics/gtksee \
		ipe>=0:${PORTSDIR}/graphics/ipe \
		netpbm>=0:${PORTSDIR}/graphics/netpbm \
		xfig>=0:${PORTSDIR}/graphics/xfig \
		xv>=0:${PORTSDIR}/graphics/xv \
		opencv>=0:${PORTSDIR}/graphics/opencv \
		gnuplot>=0:${PORTSDIR}/math/gnuplot \
		ImageMagick>=0:${PORTSDIR}/graphics/ImageMagick \
		${PYTHON_PKGNAMEPREFIX}imaging>=0:${PORTSDIR}/graphics/py-imaging
.if ${ARCH} == "i386"
RUN_DEPENDS+=	svgalib>=0:${PORTSDIR}/graphics/svgalib
.endif

# FTP Client
RUN_DEPENDS+=	ftps:${PORTSDIR}/ftp/bsdftpd-ssl \
		ncftp>=3:${PORTSDIR}/ftp/ncftp3 \
		lftp:${PORTSDIR}/ftp/lftp

# Mail Client
RUN_DEPENDS+=	zh-mutt-devel>=0:${PORTSDIR}/chinese/mutt \
		zh-pine>=0:${PORTSDIR}/chinese/pine4 \
		fetchmail:${PORTSDIR}/mail/fetchmail \
		metamail>=0:${PORTSDIR}/mail/metamail \
		urlview:${PORTSDIR}/textproc/urlview
# For VM (emacs)
RUN_DEPENDS+=	stunnel:${PORTSDIR}/security/stunnel # for VM (emacs)

# News
RUN_DEPENDS+=	tin:${PORTSDIR}/chinese/tin

# Telnet
RUN_DEPENDS+=	zh-telnet>=0:${PORTSDIR}/chinese/telnet

# IRC
RUN_DEPENDS+=	zh-irssi>=0:${PORTSDIR}/chinese/irssi

# VNC
.if ${ARCH} == "i386"
RUN_DEPENDS+=	tightvnc>=0:${PORTSDIR}/net/tightvnc
.else
RUN_DEPENDS+=	vnc>=0:${PORTSDIR}/net/vnc
.endif

# Instant Messenger
RUN_DEPENDS+=	pidgin:${PORTSDIR}/net-im/pidgin

# Multimedia
RUN_DEPENDS+=	mplayer:${PORTSDIR}/multimedia/mplayer \
		mencoder:${PORTSDIR}/multimedia/mencoder \
		sdl_mixer>=0:${PORTSDIR}/audio/sdl_mixer

# DocApps for WindowMaker
RUN_DEPENDS+=	wmbiff>=0:${PORTSDIR}/mail/wmbiff \
		wmweather>=0:${PORTSDIR}/misc/wmweather \
		wmweather+>=0:${PORTSDIR}/misc/wmweather+ \
		wmnd>=0:${PORTSDIR}/net/wmnd \
		wmcpuload>=0:${PORTSDIR}/sysutils/wmcpuload \
		wminet>=0:${PORTSDIR}/sysutils/wminet \
		wmmemmon>=0:${PORTSDIR}/sysutils/wmmemmon \
		wmtop>=0:${PORTSDIR}/sysutils/wmtop \
		wmCalClock>=0:${PORTSDIR}/x11-clocks/wmcalclock \
		wmclock>=0:${PORTSDIR}/x11-clocks/wmclock \
		wmclockmon>=0:${PORTSDIR}/x11-clocks/wmclockmon \
		wmtime>=0:${PORTSDIR}/x11-clocks/wmtime \
		wmtimer>=0:${PORTSDIR}/x11-clocks/wmtimer \
		wmcliphist>=0:${PORTSDIR}/x11/wmcliphist \
		temperature.app>=0:${PORTSDIR}/x11/temperature.app \
		asbutton>=0:${PORTSDIR}/misc/asbutton

# Tools for enlightment
RUN_DEPENDS+=	e16utils>=0:${PORTSDIR}/x11-wm/e16utils

# Other X11 tools
RUN_DEPENDS+=	xlock:${PORTSDIR}/x11/xlockmore \
		xloadimage:${PORTSDIR}/x11/xloadimage \
		synergy>=0:${PORTSDIR}/sysutils/synergy \
		rdesktop>=0:${PORTSDIR}/net/rdesktop \
		gkrellm>=2:${PORTSDIR}/sysutils/gkrellm2 \
		pclock:${PORTSDIR}/x11-clocks/pclock

do-install:
	@${DO_NADA}

check:
	@${PKG_INFO} -qoa | ${SORT} > ${PKG_CURRENT}
	@${MAKE} all-depends-list | ${SED} 's,${PORTSDIR}/,,' | ${SORT} > ${PKG_LISTED}
	@${ECHO_CMD} "Ports are installed but not listed"
	@comm -23 ${PKG_CURRENT} ${PKG_LISTED}
	@${ECHO_CMD} ""
	@${ECHO_CMD} "Extra ports listed but not installed"
	@comm -13 ${PKG_CURRENT} ${PKG_LISTED}
	@${RM} -f ${PKG_CURRENT} ${PKG_LISTED}

.include <bsd.port.post.mk>
