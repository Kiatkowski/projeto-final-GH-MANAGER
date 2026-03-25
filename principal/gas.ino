void mostrarTelaSeguranca() {
  int leituraGas = analogRead(pinoGas);
 
  // Estimativa simples de PPM
  int ppmCarbono = map(leituraGas, 0, 1023, 400, 2000);

  lcd.setCursor(0,0);
  lcd.print("Carbono: ");
  lcd.print(ppmCarbono);
  lcd.print("PPM");

  lcd.setCursor(0,1);
  if (ppmCarbono > 1200) {
    lcd.print(">> ALERTA! <<");
    // Aqui o integrante 4 pode adicionar um alerta sonoro (Buzzer) futuro
  } else {
    lcd.print("Status: Seguro");
  }

  Serial.print("PPM Estimado: ");
  Serial.println(ppmCarbono);
}
