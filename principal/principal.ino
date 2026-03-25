#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Configurações Globais
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define DHTPIN 2
#define DHTTYPE DHT11
const int pinoGas = A0;
const int pinoUmidSolo = A2;
const int pinoLDR = A1; 

DHT dht(DHTPIN, DHTTYPE);

unsigned long tempoAnterior = 0;
int telaAtual = 0;
const long intervaloTela = 3000; 

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  dht.begin();
  
  lcd.setCursor(0, 0);
  lcd.print("   INICIANDO    ");
  lcd.setCursor(0, 1);
  lcd.print("    ESTUFA      ");
  delay(2000);
}

void loop() {
  unsigned long tempoAtual = millis();
  
  if (tempoAtual - tempoAnterior >= intervaloTela) {
    tempoAnterior = tempoAtual;
    lcd.clear();
    
    // Máquina de Estados para alternar telas
    switch(telaAtual) {
      case 0: mostrarTelaAr(); telaAtual = 1; break;
      case 1: mostrarTelaSoloLuz(); telaAtual = 2; break;
      case 2: mostrarTelaSeguranca(); telaAtual = 0; break;
    }
  }
}