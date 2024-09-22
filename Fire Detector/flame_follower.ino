// Define the pins for the IR sensors
#define leftSensorPin A2
#define middleSensorPin A1
#define rightSensorPin A0

// Define the pins for the motor driver
#define leftMotorPin1 11
#define leftMotorPin2 10
#define rightMotorPin1 13
#define rightMotorPin2 12
#define fanMotorPin 9
// Define the threshold value for the IR sensors
#define threshold 500

void setup() {
  // Set the motor driver pins as output
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);
}

void loop() {
  // Read the sensor values
  int leftSensorValue = analogRead(leftSensorPin);
  int middleSensorValue = analogRead(middleSensorPin);
  int rightSensorValue = analogRead(rightSensorPin);
  
  if(middleSensorValue > 750){
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, LOW);
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, LOW);
    digitalWrite(fanMotorPin, HIGH);
  }
  // Check which sensor has the highest reading
  else if (leftSensorValue > threshold) {
    // Turn left
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, HIGH);
    digitalWrite(rightMotorPin1, HIGH);
    digitalWrite(rightMotorPin2, LOW);
  } else if (rightSensorValue > threshold) {
    // Turn right
    digitalWrite(leftMotorPin1, HIGH);
    digitalWrite(leftMotorPin2, LOW);
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);
  } else{
    // Go straight
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, HIGH);
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);
  }
}
