int LEDPIN {3};       // can do analog writes

int potPin {A0};

float potVal{};



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDPIN,OUTPUT);
  pinMode(potPin, INPUT);




}

void loop() {
  // put your main code here, to run repeatedly:
  
  potVal = analogRead(potPin);

  float convertedPotValToLedVal {(255.0 / 1023.0) * potVal};    // converts pot output value (0-1023) to LED input value (0-255)

  analogWrite(LEDPIN, convertedPotValToLedVal);

  Serial.print("Raw POT value: " );
  Serial.print(potVal);
  Serial.print(" Converted LED Value: ");
  Serial.println(convertedPotValToLedVal);



}
