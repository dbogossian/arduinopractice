int led=6;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // gradually increase time pin is HIGH
  for(int i=0; i<255; i++){
    analogWrite(led, i);
    delay(5);
  }
  // gradually decrease time pin is HIGH
  for(int i=255; i>0; i--){
    analogWrite(led, i);
    delay(5);
  }
}

