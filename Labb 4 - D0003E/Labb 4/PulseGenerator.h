#ifndef PULSEGEN_H_
#define PULSEGEN_H_

#include <avr/io.h>
#include "TinyTimber.h"
#include "Gui.h"
#include "Joystick.h"
#include "Porthandler.h"

#define initPulsegen(currentFreq, storedFreq, port) {initObject(), currentFreq, storedFreq, port}
	
typedef struct {
	Object super;
	int currentFreq;	// Nuvarande frekvens
	int storedFreq;		// Sparad frekvens
	int port;			// H�ger eller v�nster
} Pulsegen;

void increase(Pulsegen *self);
void decrease(Pulsegen *self);
void stored(Pulsegen *self);
void changedisplaysegment(Pulsegen *self); 
//void generate(Pulsegen *self);	// Genererar pulser

#endif