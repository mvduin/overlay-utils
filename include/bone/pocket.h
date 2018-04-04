#pragma once


//      P1_01      //	5v in
#define P1_03 141  // io 3.13	usb 1 drv vbus
//      P1_05 140  //		usb 1 vbus in
//	P1_07      //	5v usb
//      P1_09 136  //		usb 1 d-	uart 3 rx/tx
//      P1_11 137  //		usb 1 d+	uart 3 rx/tx
//      P1_13 139  //		usb 1 id
//      P1_15      //	gnd
//      P1_17 205  //	gnd	adc vref-
//      P1_19 203  //		adc in 0 / x+
//      P1_21 202  //		adc in 1 / x-
//      P1_23 201  //		adc in 2 / y+
//      P1_25 200  //		adc in 3 / y-
//      P1_27 199  //		adc in 4 / w+
#define P1_29 107  // io 3.21	qep 0 strobe	pru 0 io 7
#define P1_31 104  // io 3.18	qep 0 in A	pru 0 io 4
#define P1_33 101  // io 3.15	pwm 0 out B	pru 0 io 1
#define P1_35  58  // io 2.24			pru 1 io 10


#define P1_02  57  // io 2.23	adc in 6 (/2)	pru 1 io 9
#define P1_04  59  // io 2.25			pru 1 io 11
#define P1_06  87  // io 0.05	spi 0 cs 0	pru uart txd
#define P1_08  84  // io 0.02	spi 0 clk	uart 2 rxd
#define P1_10  85  // io 0.03	spi 0 d0 miso	uart 2 txd
#define P1_12  86  // io 0.04	spi 0 d1 mosi	pru uart rxd
//      P1_14      //	3.3v out
//      P1_16      //	gnd
//      P1_18 204  //	1.8v	adc vref+
#define P1_20 109  // io 0.20			pru 0 in 16
//	P1_22      //	gnd
//	P1_24      //	5v out
#define P1_26  94  // io 0.12	i²c 2 sda	can 0 txd
#define P1_28  95  // io 0.13	i²c 2 scl	can 0 rxd
#define P1_30  93  // io 1.11	uart 0 txd	pru 1 io 15
#define P1_32  92  // io 1.10	uart 0 rxd	pru 1 io 14
#define P1_34  10  // io 0.26
#define P1_36 100  // io 3.14	pwm 0 out A	pru 0 io 0


#define P2_01  18  // io 1.18	pwm 1 out A
#define P2_03   9  // io 0.23	pwm 2 out B
#define P2_05  28  // io 0.30	uart 4 rxd
#define P2_07  29  // io 0.31	uart 4 txd
#define P2_09  97  // io 0.15	i²c 1 scl	can 1 rxd
#define P2_11  96  // io 0.14	i²c 1 sda	can 1 txd
//      P2_13      //	5v out
//      P2_15      //	gnd
#define P2_17  35  // io 2.01
#define P2_19  11  // io 0.27
//      P2_21      //	gnd
//      P2_23      //	3.3v out
#define P2_25  91  // io 1.09	spi 1 d1 mosi	can 1 rxd
#define P2_27  90  // io 1.08	spi 1 d0 miso	can 1 txd
#define P2_29  89  // io 0.07	spi 1 clk	pru cap
#define P2_31 108  // io 0.19	spi 1 cs 1	pru 1 in 16
#define P2_33  13  // io 1.13	qep 2 in B	pru 0 out 15
#define P2_35  56  // io 2.22	adc in 5 (/2)	pru 1 io 8

#define P2_02  27  // io 1.27
#define P2_04  26  // io 1.26
#define P2_06  25  // io 1.25
#define P2_08  30  // io 1.28
#define P2_10  20  // io 1.20
//      P2_12      //		power btn
//      P2_14      //		bat
//      P2_16      //		bat temp
#define P2_18  15  // io 1.15	qep 2 strobe	pru 0 in 15
#define P2_20  34  // io 2.00
#define P2_22  14  // io 1.14	qep 2 index	pru 0 in 14
#define P2_24  12  // io 1.12	qep 2 in A	pru 0 out 14
//      P2_26 110  //		reset in/out
#define P2_28 106  // io 3.20	qep 0 index	pru 0 io 6
#define P2_30 103  // io 3.17			pru 0 io 3
#define P2_32 102  // io 3.16			pru 0 io 2
#define P2_34 105  // io 3.19	qep 0 in B	pru 0 io 5
//      P2_36 196  //		adc in 7
