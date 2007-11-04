#!/bin/sh

# This setup necessary enviroment for MATLAB to run smoothly on FreeBSD.
# Followed by the instruction in FreeBSD Handbook: 10.5 Installing MATLAB®)

export PATH=/usr/bin:/usr/sbin:/sbin:/bin

BASEDIR=`realpath $0`
BASEDIR=`dirname ${BASEDIR}`
BASEDIR=`realpath ${BASEDIR}/../`
FILESDIR=${BASEDIR}/files

MATLABDIR=/compat/linux/usr/local/matlab

PATCH="patch -s"

INSTALL=/usr/bin/install
INSTALL_SCRIPT="${INSTALL} -o root -g wheel -m 555"
INSTALL_DATA="${INSTALL} -o root -g wheel -m 444"

if [ `id -u` -ne 0 ]; then
	echo "You must be root to execute this"
	exit 1
fi

echo ""
echo "Please copy linux5:/usr/local/matlab to ${MATLABDIR} *MANUALLY* before using this script"
echo "Sleeping 5 secs..."
echo ""

sleep 5

if [ -d "${MATLABDIR}" ]; then
	cd ${MATLABDIR} || exit 1

	echo "===> Apply patches"
	for i in ${FILESDIR}/*.diff; do
		echo -n "`basename ${i}` "
		${PATCH} < ${i}
		if [ $? -ne 0 ]; then
			echo "[FAILED]";
		fi
		echo ""
	done

	echo "===> Install auxiliary scripts (for closing MATLAB)"
	echo -n "finish.m "
	${INSTALL_DATA} ${FILESDIR}/finish.m ${MATLABDIR}/toolbox/local
	echo -n "finish.sh "
	${INSTALL_SCRIPT} ${FILESDIR}/finish.sh ${MATLABDIR}/bin
	echo ""
else
	echo "ERROR: ${MATLABDIR} does not exist."
	exit 1
fi
