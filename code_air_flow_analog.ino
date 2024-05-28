const int sensorPin = A0;
const int thresholdValue = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  if (sensorValue >= thresholdValue){
    float airFlow = map(sensorValue, 8, 1023, 20, 200);
    float time = millis()/1000;
    Serial.print("time: ");
    Serial.print(time);
    Serial.print(" ");
    Serial.print("Airflow: ");
    Serial.print(airFlow);
    Serial.print(" ");
    Serial.println("L/min");
  }
  else {
    Serial.print("time: ");
    Serial.print(millis()/1000);
    Serial.print(" ");
    Serial.print("Airflow: ");
    Serial.print(0);
    Serial.print(" ");
    Serial.println("L/min");
  }
  delay(100);
}

