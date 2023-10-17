int led = 6;
void setup() {
 pinMode(led, OUTPUT);
 // This turns on the serial connection
 Serial.begin(9600);
}

void loop() {
  int pot;
  digitalWrite(led, HIGH);
  pot = analogRead(A5);
  // this prints a line with the potentiometer reading
  Serial.println(pot);
  delay(pot);
  digitalWrite(led, LOW);
  delay(pot);
}
