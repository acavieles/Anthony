
// Reads analogue sensor and writes value to the serial port


//FLEX SENSOR INPUT
const int flexinput = 0; //select the input pin for the sensor resistor
const int LED = 9; //connected to digital pin 13
const int LED2 = 12; //connected to digital pin 12
const int LED3 = 11; //connected to digital pin 11
const int LED4 = 10; //connected to digital pin 10



int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by



int val = 0;

void setup() {
Serial.begin(9600); // Start serial communication at 9600 bps
//analog pins are automatically set as inputs
pinMode(LED, OUTPUT); //sets the digital pin as output
pinMode(LED2, OUTPUT); 
pinMode(LED3, OUTPUT); 
pinMode(LED4, OUTPUT); 
}

void loop() {
val = ((analogRead(flexinput))-540)*2; //read sensor and assign to variable called val
delay(100); // Wait 100 milliseconds
Serial.write(val); // use to send into processing
//Serial.println(val); //use to send to serial monitor in arduino






if (val < 60 && val > 40) {
 digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);
 
  
digitalWrite(LED2, HIGH);
  delay(500);
  digitalWrite(LED2, LOW);
  delay(50);

digitalWrite(LED3, HIGH);
  delay(600);
  digitalWrite(LED3, LOW);
  delay(40);

digitalWrite(LED4, HIGH);
  delay(700);
  digitalWrite(LED4, LOW);
  delay(30);

   digitalWrite(LED, HIGH);
  delay(800);
  digitalWrite(LED, LOW);
  delay(20);
}






if (val < 40) {

  digitalWrite(LED, HIGH);
  delay(85);
  digitalWrite(LED, LOW);
  delay(5);

digitalWrite(LED4, HIGH);
  delay(80);
  digitalWrite(LED4, LOW);
  delay(10);


digitalWrite(LED3, HIGH);
  delay(70);
  digitalWrite(LED3, LOW);
  delay(20);

  digitalWrite(LED2, HIGH);
  delay(60);
  digitalWrite(LED2, LOW);
  delay(30);
  
 digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
  delay(40);
 
  




   
}



else if(val > 50) { 

analogWrite(LED, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
  }

}
