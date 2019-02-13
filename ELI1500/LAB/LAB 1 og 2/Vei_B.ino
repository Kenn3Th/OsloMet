void vei_B(){
  var = 12;
  Serial.println("vei b");
  Serial.print(var);
}

void veiB(){
    Serial.println("Case B");
    delay(3000);
    digitalWrite(pin_AGR, LOW);
    digitalWrite(pin_AGU,HIGH);
    delay(500);
    digitalWrite(pin_AGU,LOW);
    digitalWrite(pin_AR,HIGH);
    delay(500);
    digitalWrite(pin_BGU,HIGH);
    delay(500);
    digitalWrite(pin_BR,LOW);
    digitalWrite(pin_BGU,LOW);
    digitalWrite(pin_BGR,HIGH);
    delay(15000);
    digitalWrite(pin_BGR, LOW);
    digitalWrite(pin_BGU,HIGH);
    delay(500);
    digitalWrite(pin_BGU,LOW);
    digitalWrite(pin_BR,HIGH);
    delay(500);
    digitalWrite(pin_AGU,HIGH);
    delay(500);
    digitalWrite(pin_AR,LOW);
    digitalWrite(pin_AGU,LOW);
    digitalWrite(pin_AGR,HIGH);
}
