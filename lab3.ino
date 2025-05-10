const int potPin = 34; // analog
int potValue = 0;

void setup() {
  Serial.begin(115200); // serial monitor
}

void loop() {
  // Reading potentiometer value
  potValue = analogRead(potPin);
  Serial.println(potValue);
}
