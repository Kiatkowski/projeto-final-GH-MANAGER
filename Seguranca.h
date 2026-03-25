#ifndef SEGURANCA_H

#define SEGURANCA_H


#include <Arduino.h>


// Verifica se o nível de gás ultrapassou o limite seguro (400)

bool verificarAlertaGas(int nivelGas);


// Pode ser expandido para verificar temperatura crítica, etc.

#endif
