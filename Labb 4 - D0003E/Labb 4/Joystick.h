#ifndef JOYSTICK_H_
#define JOYSTICK_H_

#include <avr/io.h>
#include "TinyTimber.h"
#include "PulseGenerator.h"
#include "Porthandler.h"
#include "Gui.h"

#define initJoystick(pulse) {initObject(), pulse}

typedef struct {
	Object super;
	Pulse *pulse;
	//Pulsegen *pulsegen;
} Joystick;

void direction(Joystick *self);		//upp, ner eller tryck
void changepulsegenerator(Joystick *self);	//h�ger eller v�nster

#endif