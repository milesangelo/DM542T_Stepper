//defines pins
const int stepPin = 9;  //PUL -Pulse
const int dirPin = 8; //DIR -Direction
const int enPin = 7;  //ENA -Enable

void setup(){
  //Sets the pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);
  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
}

void loop(){
  int revs = 2;
  //Enables the motor direction to move
  digitalWrite(dirPin,HIGH);
  //Makes 200 Pulses for making one full cycle rotation
  for (int i = 0; i < revs; ++i) {
  for(int x = 0; x < 1600; x++){
    digitalWrite(stepPin, HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
    }
  }
  //One second delay
  delay(1000);
  //Changes the rotations direction
  digitalWrite(dirPin,LOW);
  // Makes 200 pulses for making one full cycle rotation
  for (int j = 0; i < revs; ++i) {
    for(int x = 0; x < 1600; x++) {
      digitalWrite(stepPin,HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(500);
    }
  }
  //One second delay
  delay(1000); 
}
