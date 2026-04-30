

const int voltageInputPin {A3};
double voltageInputRaw {0};




void setup() {
  // put your setup code here, to run once:
  pinMode(voltageInputPin, INPUT);
  Serial.begin(9600);
  delay(100);



}

void loop() {
  // put your main code here, to run repeatedly:
  double voltageAmountCorrected {};
  voltageInputRaw = analogRead(voltageInputPin);

  voltageAmountCorrected = ((5.0/1023.0) * voltageInputRaw); 

  Serial.println(voltageAmountCorrected);
  delay(300);



}
