#pragma once

// Obnoxiously, the uio_pdrv_genirq driver has no fixed compatible-string,
// Instead you need to specify one via the uio_pdrv_genirq.of_id module
// parameter, e.g. using a modprobe config file like this:
//	https://github.com/mvduin/py-uio/blob/master/etc/modprobe.d/uio.conf
//
// UIO_COMPATIBLE must be set to whatever of_id you've configured.
//
// My recommendation is to just use "uio".
// 
#ifndef UIO_COMPATIBLE
#define UIO_COMPATIBLE "uio"
#endif
