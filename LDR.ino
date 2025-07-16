int sensorValue = 0;
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);

  if (sensorValue < 300) { 
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW); 
  }

  delay(100);
}
