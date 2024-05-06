#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include <Arduino.h>

// Enumeración para los pines de los LEDs
enum gpioMap_t { LED_BLUE = 3, LED_GREEN = 4, LED_YELLOW = 5, LED_RED = 6 };

// Prototipos de funciones
void inicializarLeds();
void inicializarBotones();
void ejecutarSecuencia();
void encenderLed(gpioMap_t led);
void apagarLeds();

#endif
