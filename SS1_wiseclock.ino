//Anthony Cavieles
// rotating clock back and forth LED pattern, when button pressed large LED turns on as well as the pattern of the LED clock changes state





//NOTES
//digital pins can be used as outs/ins
int buttonState = 0;         // variable for reading the pushbutton status

const int LED = 13; //connected to digital pin 13
const int LED2 = 12; //connected to digital pin 12
const int LED3 = 11; //connected to digital pin 11
const int LED4 = 10; //connected to digital pin 10
const int LED5 = 9; //connected to digital pin 9
const int LED6 = 8; //connected to digital pin 8
const int LED7 = 6; //connected to digital pin 6
const int buttonPin = 2; 


int brightness = 0;    // how bright the LED is
int fadeAmount = 15;    // how many points to fade the LED by

// variables will change:


void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT); //sets the digital pin as output
pinMode(LED2, OUTPUT); 
pinMode(LED3, OUTPUT); 
pinMode(LED4, OUTPUT); 
pinMode(LED5, OUTPUT); 
pinMode(LED6, OUTPUT); 
pinMode(LED7, OUTPUT); 
 // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  
}

void loop() {
   // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
// check if the pushbutton is pressed. If it is, the buttonState is HIGH:


//OFFBUTT
  if (buttonState == LOW) {

//RED
  digitalWrite(LED6, HIGH);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(100);
  // put your main code here, to run repeatedly:

  //RED
  digitalWrite(LED6, HIGH);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(100);
  // put your main code here, to run repeatedly:

 //GREEN
  digitalWrite(LED5, HIGH);
  delay(50);
  digitalWrite(LED5, LOW);
  delay(85);
  // put your main code here, to run repeatedly:

  //RED
  digitalWrite(LED4, HIGH);
  delay(65);
  digitalWrite(LED4, LOW);
  delay(65);
  // put your main code here, to run repeatedly:

   //GREEN
 digitalWrite(LED2, HIGH);
  delay(85);
  digitalWrite(LED2, LOW);
  delay(85);
  // put your main code here, to run repeatedly:

    //RED
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  // put your main code here, to run repeatedly:


    //GREEN
 digitalWrite(LED3, HIGH);
  delay(120);
  digitalWrite(LED3, LOW);
  delay(120);
  // put your main code here, to run repeatedly:
  }

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  
 
 
  //ONBUTT
  if (buttonState == HIGH) {

  digitalWrite(LED7, 150);
 }
 else{
  digitalWrite(LED7, LOW);
 }


    
    
  //RED
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  // put your main code here, to run repeatedly:

  //RED
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  // put your main code here, to run repeatedly:

  


   //GREEN
 digitalWrite(LED2, HIGH);
  delay(50);
  digitalWrite(LED2, LOW);
  delay(50);
  // put your main code here, to run repeatedly:

//RED
  digitalWrite(LED4, HIGH);
  delay(65);
  digitalWrite(LED4, LOW);
  delay(65);
  // put your main code here, to run repeatedly:

  //GREEN
  digitalWrite(LED5, HIGH);
  delay(85);
  digitalWrite(LED5, LOW);
  delay(85);
  // put your main code here, to run repeatedly:

  //RED
  digitalWrite(LED6, HIGH);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(100);
  // put your main code here, to run repeatedly:

  

     //GREEN
 digitalWrite(LED3, HIGH);
  delay(140);
  digitalWrite(LED3, LOW);
  delay(140);
  // put your main code here, to run repeatedly:


  }

 
 

  
  

