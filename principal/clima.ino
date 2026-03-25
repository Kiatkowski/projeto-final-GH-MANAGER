void mostrarTelaAr() {
  float t = dht.readTemperature();
  float u = dht.readHumidity();

  lcd.setCursor(0,0);
  lcd.print("Temp Ar: ");
  if (isnan(t)) {
    lcd.print("--");
  } else {
    lcd.print((int)t);
    lcd.print("C");
  }

  lcd.setCursor(0,1);
  lcd.print("Umid Ar: ");
  if (isnan(u)) {
    lcd.print("--");
  } else {
    lcd.print((int)u);
    lcd.print("%");
  }
}