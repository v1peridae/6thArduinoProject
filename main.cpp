int tempReading = 0;  
int lightReading = 0;  

void setup() {
  pinMode(A0, INPUT);
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  tempReading = analogRead(A0);
  lightReading = analogRead(A1);
  Serial.print("Temp: ");
  Serial.println(tempReading);
  if (tempReading > 155) {
    digitalWrite(6,HIGH);
  }
  if (tempReading < 151) {
    digitalWrite(6,LOW);
  }
  Serial.print("Light: ");
  Serial.println(lightReading);
  if (lightReading < 500) {
    digitalWrite(5,HIGH);
  }
  if (lightReading > 550) {
    digitalWrite(5,LOW);
  }
  delay(250);
}
