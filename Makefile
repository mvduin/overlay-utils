SHELL := /bin/bash -o pipefail

CPP = cpp
CPPFLAGS = -nostdinc -undef -x assembler-with-cpp
# gcc has no way to disable just the "#pragma once in main file" warning,
# see -Wno-pragma-once-outside-header
CPPFLAGS += -w
CPPFLAGS += -D__DTS__
CPPFLAGS += -I include -I .
DTC = dtc

dtsi_files := $(wildcard *.dtsi uio/*.dtsi)
dtbo_files := ${dtsi_files:%.dtsi=%.dtbo}

all :: ${dtbo_files}

clean ::
	${RM} *.dtbo *.i.dts uio/*.dtbo uio/*.i.dts

%.dtbo: %.dtsi
	${CPP} ${CPPFLAGS} $< -pipe | bin/dtsi-to-overlay $* \
		| ${DTC} -@ -q -I dts -O dtb ${OUTPUT_OPTION}

%.i.dts: %.dtsi
	${CPP} ${CPPFLAGS} $< -pipe | bin/dtsi-to-overlay $* >$@

.DELETE_ON_ERROR:
