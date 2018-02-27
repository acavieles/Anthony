/*
  Adafruit Arduino - Lesson 14. Sweep
*/
// Reads analogue sensor and writes value to the serial port

int sensorPin = 0; //sensor hooked up to analog pin 0
int val = 0;

#include <Servo.h>
Servo servo;
int servoPin = 9;
int angle = 0;   // servo position in degrees
void setup() {

  servo.attach(servoPin);
  Serial.begin(9600); // Start serial communication at 9600 bps
}

void loop() {
  val = analogRead(sensorPin); //read sensor and assign to variable called val
  delay(10); // Wait 100 milliseconds
  Serial.println(val);

  if (val >200 && val <400) {

    //{
    //  // scan from 0 to 180 degrees
     for(angle = 0; angle < 45; angle++)
      {
       servo.write(angle);
        delay(15);
      }
      // now scan back from 180 to 0 degrees
     for(angle = 45; angle > 0; angle--)
      {
        servo.write(angle);
       delay(15);
      }
  }



  if (val < 150) {

    //{
    //  // scan from 0 to 180 degrees
     for(angle = 0; angle < 90; angle++)
      {
       servo.write(angle);
        delay(0);
      }
      // now scan back from 180 to 0 degrees
     for(angle = 90; angle > 0; angle--)
      {
        servo.write(angle);
       delay(0);
      }










  }
}








