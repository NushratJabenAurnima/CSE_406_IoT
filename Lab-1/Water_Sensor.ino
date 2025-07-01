// Sensor pins
#define sensorPower 7
#define sensorPin A0

int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPower, OUTPUT);
  digitalWrite(sensorPower, LOW);
}

void loop() {
  int level = readSensor();
  Serial.print("Water Sensor Reading: ");
  Serial.println(level);
  delay(1000);
}

// Function to read water sensor value
int readSensor() {
  digitalWrite(sensorPower, HIGH);
  delay(10); 
  val = analogRead(sensorPin);
  digitalWrite(sensorPower, LOW);
  return val;
}
