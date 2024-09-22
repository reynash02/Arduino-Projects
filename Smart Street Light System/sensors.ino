int LDRInput=A0; //Set Analog Input A0 for LDR.
int LED=2;
int LED2=4;
int LED3=7;
int LED4=8;
int LED5=12;
void setup() {
Serial.begin(9600);
pinMode(LDRInput,INPUT);
pinMode(LED,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LED3,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED5,OUTPUT);
}

void loop() {
int value=analogRead(LDRInput);//Reads the Value of LDR(light).
Serial.println("LDR value is :");//Prints the value of LDR to Serial Monitor.
Serial.println(value);
if(value>10)
  {
    digitalWrite(LED,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
  else
  {
    digitalWrite(LED,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED5,HIGH);
    delay(400);
    digitalWrite(LED,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED4,HIGH);
    delay(400);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED5,HIGH);
    delay(400);
    digitalWrite(LED,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED4,HIGH);
    delay(400);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
    delay(200);
    digitalWrite(LED,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED4,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
    delay(200);
    digitalWrite(LED,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED4,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED4,LOW);
    delay(400);
  }
}