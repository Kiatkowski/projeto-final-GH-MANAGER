#ifndef ATUADORES_H
#define ATUADORES_H

#include <Arduino.h>

void initAtuadores();         // Configura pinos de saída (Relés/Buzzer)
void controlarBomba(int umidade); // Exemplo: Liga se umidade solo < 30%
void acionarAlarme(bool ligar);   // Liga buzzer ou LED de alerta

#endif