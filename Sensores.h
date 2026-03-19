#ifndef SENSORES_H
#define SENSORES_H

#include <Arduino.h>

// Estrutura que centraliza todos os dados da estufa
struct DadosEstufa {
  float tempAr;
  float umidAr;
  int umidSolo;
  int luz;
  int gas;
};

// Protótipos das funções
void initSensores();          // Configura pinos e inicializa DHT
DadosEstufa lerSensores();    // Realiza todas as leituras e retorna a struct

#endif
