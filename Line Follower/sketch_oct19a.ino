
const int left_sensor_pin=6;
const int right_sensor_pin=7;
int left_sensor_value;
int right_sensor_value;
void setup() {
    Serial.begin(9600);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
}
void moverobo(String motion){
  if (motion=="Forward"){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Forward");
  }
  else if (motion=="Backward"){
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Backward");    
  }
  else if (motion=="Left"){
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Right");
  }
  else if (motion=="Right"){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Left");
  }
  else if (motion=="Stop"){
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    Serial.println("Stop");
  }
}
void loop() {
  left_sensor_value=digitalRead(left_sensor_pin);
  right_sensor_value=digitalRead(right_sensor_pin);
  if (left_sensor_value==LOW && right_sensor_value==LOW){
    moverobo("Forward");
  }
  else if(left_sensor_value==HIGH && right_sensor_value==LOW){
    moverobo("Right");
  }
  else if(left_sensor_value==LOW && right_sensor_value==HIGH){
    moverobo("Left");
  }
  else if(left_sensor_value==HIGH && right_sensor_value==HIGH){
    moverobo("Stop");
  } 
}
