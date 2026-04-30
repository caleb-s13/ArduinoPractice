void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // A 
  pinMode(9, OUTPUT);  // B
  pinMode(3, OUTPUT);  // GREEN OUTPUT

  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);

  delay(100);

  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(3, LOW);

  delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);

  delay(100);

  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(3, LOW);









}

bool  randomState(){
  int temp {random(0,2)};
  if (temp == 1){
    return true;
  }
  else{
    return false;
  }
}




void loop() {
  // put your main code here, to run repeatedly:
  bool outputState;
  bool AState;
  bool BState;

  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(3, LOW);





  bool ledAState {randomState()};
  

  bool ledBState {randomState()};
  
  


  if (ledAState == true){
    digitalWrite(13, HIGH);
  }

  if (ledBState==true){
    digitalWrite(9,HIGH);
  }

  if (ledBState ==true && ledAState == true){
    digitalWrite(3,HIGH);
  }


  
  delay(333);



  








}
