/*
*12th Sep 2021
*Develop By - Achintha Aththanayake
*Parking System with LiFi Technology & Arduino
*/

int ldr=12; //Set analog input for LDR.
int value=0; //Set value input for LDR(light).
int nLight=3; //Set digital output for notification light

void setup() {
Serial.begin(9600);
pinMode(nLight,OUTPUT);
}

void loop() {
value=analogRead(ldr);//Reads the Value of LDR(light).

if(value<300)
  {
    digitalWrite(3,LOW);//Makes the LED glow when car is parked in the slot.
  }
  else
  {
    digitalWrite(3,HIGH);//Turns the LED OFF when the slot is free.
  }
}
