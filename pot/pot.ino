int led = 6;
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int times = 0;
  // This waits until it receives an integer via the serial connection
  times = Serial.parseInt();
  // this loops the number of times entered.
  for (int i=0;i < times; i++) {  
    int pot = analogRead(A5);
    digitalWrite(led, HIGH);
    Serial.print(pot);
    delay(pot);
    Serial.print(",");
    pot = analogRead(A5);
    Serial.println(pot);
    digitalWrite(led, LOW);
    delay(pot);
  }
}
