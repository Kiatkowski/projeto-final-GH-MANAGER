void mostrarTelaSoloLuz() {
  // Lógica de Solo
  int soloRaw = analogRead(pinoUmidSolo);
  int soloPorc = map(soloRaw, 1023, 0, 0, 100); // Invertido: 1023 é seco, 0 é úmido
 
  // Lógica de Luz
  int luzRaw = analogRead(pinoLDR);
  int luzPorc = map(luzRaw, 0, 1023, 0, 100);

  lcd.setCursor(0,0);
  lcd.print("Solo:");
  lcd.print(soloPorc);
  lcd.print("% ");
 
  lcd.setCursor(0,9);
  lcd.print("Luz:");
  lcd.print(luzPorc);
  lcd.print("%");
}
