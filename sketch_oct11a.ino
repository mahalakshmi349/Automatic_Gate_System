#include <Servo.h>

Servo gateServo;

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;

const int detectionDistance = 20; // cm
const int gateOpenTime = 3000;    // milliseconds the gate stays open

long duration;
int distance;

void setup() {
  gateServo.attach(servoPin);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);

  gateServo.write(0); // initial closed position
  Serial.println("System Ready");
}

long readDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long d = pulseIn(echoPin, HIGH, 30000); // 30ms timeout
  return d * 0.034 / 2; // convert to cm
}

void openGate() {
  Serial.println("Car detected! Opening gate...");
  gateServo.write(90); // open gate instantly
  delay(gateOpenTime); // wait for car to pass
  gateServo.write(0);  // close gate
  Serial.println("Gate closed");
}

void loop() {
  distance = readDistance();
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= detectionDistance) {
    openGate(); // open gate when car detected
  }

  delay(200); // small loop delay
}
