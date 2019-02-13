void fotgjenger(){
  var = 11;
  Serial.println("Fotgjenger\n");
}

void FOTGJENGER(){
Serial.println("CaseC");
  delay(5000);
  digitalWrite(pin_AGR, LOW);
  digitalWrite(pin_AGU, HIGH);
  delay(1500);
  digitalWrite(pin_AGU, LOW);
  digitalWrite(pin_AR, HIGH);
  delay(300);
  digitalWrite(pin_FG, HIGH);
  digitalWrite(pin_FR, LOW);
  delay(6000);
  digitalWrite(pin_FG, LOW);
  delay(500);
  digitalWrite(pin_FG, HIGH);
  delay(500);
  digitalWrite(pin_FG, LOW);
  delay(500);
  digitalWrite(pin_FG, HIGH);
  delay(500);
  digitalWrite(pin_FG, LOW);
  delay(500);
  digitalWrite(pin_FG, HIGH);
  delay(500);
  digitalWrite(pin_FG, LOW);
  digitalWrite(pin_FR, HIGH);
  delay(300);
  digitalWrite(pin_AGU, HIGH);
  delay(1500);
  digitalWrite(pin_AGR, HIGH);
  digitalWrite(pin_AGU, LOW);
  digitalWrite(pin_AGR, LOW);
  
}
