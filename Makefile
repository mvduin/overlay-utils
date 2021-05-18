SHELL := /bin/bash -o pipefail

CPP = cpp
CPPFLAGS = -nostdinc -undef -x assembler-with-cpp
CPPFLAGS += -D__DTS__
CPPFLAGS += -I include
DTC = dtc

all :: $(patsubst %.dtsi,%.dtbo,$(wildcard *.dtsi))

clean ::
	${RM} *.dtbo

%.dtbo: %.dtsi
	${CPP} ${CPPFLAGS} $< -pipe | bin/dtsi-to-overlay $* \
		| ${DTC} -@ -q -I dts -O dtb ${OUTPUT_OPTION}

%.i.dts: %.dtsi
	${CPP} ${CPPFLAGS} $< -pipe | bin/dtsi-to-overlay $* >$@

.DELETE_ON_ERROR:
