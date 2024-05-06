#include "LedControl.h"

// Implementación de funciones
void inicializarLeds() {
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  apagarLeds(); // Asegura que todos los LEDs estén apagados al inicio
}

void inicializarBotones() {
  // Configurar los pines de botones, ejemplo:
  pinMode(2, INPUT); // Suponiendo que el botón está conectado al pin 2
}

void ejecutarSecuencia() {
  // Logica para ejecutar la secuencia de LEDs
  // Esto puede incluir leer botones y ajustar la secuencia basado en su estado
  encenderLed(LED_GREEN);
  delay(500);
  apagarLeds();
  // Repetir para otros LEDs...
}

void encenderLed(gpioMap_t led) {
  digitalWrite(led, HIGH);
}

void apagarLeds() {
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, LOW);
}
