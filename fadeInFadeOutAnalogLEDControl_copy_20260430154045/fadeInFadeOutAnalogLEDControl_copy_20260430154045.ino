int dimmerLED {9};    //make sure this pin out supports analog output -> has ~ next to output

void setup() {
  pinMode(dimmerLED, OUTPUT);
}

void loop() {

  analogWrite(dimmerLED, 0);
  delay(1000);  

  for (int i = 0; i <= 255; i++) {
    analogWrite(dimmerLED, i);
    delay(50);
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(dimmerLED, i);
    delay(50);
  }
}