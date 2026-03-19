#ifndef DISPLAY_H
#define DISPLAY_H

#include "Sensores.h" // Precisa da struct para saber o que exibir

void initDisplay();           // Inicializa o LCD e backlight
void mostrarBoasVindas();     // Tela inicial de boot
void atualizarInterface(DadosEstufa dados, bool emPerigo); // Gerencia a rotação de telas

#endif
