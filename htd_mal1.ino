int currentState;
int aqi;

void setup() {
  pinMode(18, INPUT);
  pinMode(2, OUTPUT);
  pinMode(26, INPUT);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(800);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  Serial.begin(9600);
}


void loop() {
  currentState = digitalRead(18);
  aqi = analogRead(26);
  delay(25);
  Serial.println(aqi);
  if (currentState == LOW) {
    digitalWrite(2, LOW);
  }
  else if (currentState == HIGH) {
    Serial.println("Auditory Damage LED on");
    digitalWrite(2, HIGH);
  }
  if (aqi >= 125) {
    digitalWrite(4, HIGH);
  }
  else {
    digitalWrite(4, LOW);
  }
  delay(200);

} 