// msgeq7.h

#ifndef _MSGEQ7_h
#define _MSGEQ7_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif




#define MSGEQ7_INPUT_PIN  A4 // (=18) //A1    // input from mic
#define MSGEQ7_STROBE_PIN 19 //3		// stobe pin
#define MSGEQ7_RESET_PIN  17 //4		// reset pin

/*

											MSGEQ7
									 --------\_/-------
				   3v && GND-0.1uF- |1-VDDA 	 CKIN-8|	-- 200k - VVC &&  -- 33pF - GND 
								GND	|2-VSSA		RESET-7|	- Reset PIN (17)
							to A4	|3-OUT		  GND-6|	- 0.1uF - GND
					Strobe pin (19) |4-STROBE	   IN-5|	- 0.01uF -22k - Mic (??33pF to input
									 ------------------

									 ADAfruit MAX9814
									 |GND
									 |V+
									 |Gain
									 |out
									 |AR

									 Teensy-LC 
									 9 = RX2
									 10 = TX2




*/



// Function declarations for includes
//void setup_MSGEQ7();
//void get_MSGEQ7();
//void run_MSGEQ7();



#endif

