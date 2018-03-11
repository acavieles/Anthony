 float a, b;
 
 
 
 
 import processing.serial.*; //imports Serial library from Processing

Serial myPort; // creates object from Serial class
int arduinoinfo; // creates variable for data coming from serial port


void setup()
{
String portName = Serial.list()[1]; //change the number in the [] for the port you need
myPort = new Serial(this, portName, 9600);
  size(2160, 1440);
  
 // printArray(Serial.list()); // this line prints the port list to the console
  
  background(0,0,0);
 
  a=  140;
  b=  0;
  
 
}


int r= 0;

int y=0;
int x=0;
int direction =4;






  void draw () {

          if ( myPort.available() > 0) { // If data is available,
arduinoinfo = myPort.read(); // read it and store it in adruinoinfo
}
   println(arduinoinfo);

  //if (arduinoinfo > 80) {
   // arduinoinfo=200;
  //}

   
  

  
    ///////center//////////
 
 
 
   pushMatrix();
       
  
      translate(width/2,random(475,525));
      rotate(radians(r));

      
     r++;
     
     ellipse(mouseX,y,1,1);
     noFill();
     strokeWeight((arduinoinfo*.03));
   


    
     //////1/////////
    
     
 for (int x =0; x < 50; x=x+10) {
     translate(200,100);
     rotate(radians(r*2));
     r=r +1 ;
     
     
    line (a,b,50,50); 
    
     
       
    
    
    if (arduinoinfo > 40) {
    stroke(random(0,255),random(0,25),random(0,200));
    }
 };

     
     ///////2////////
     
    
     translate( a,b);
     rotate(radians(-r*2));
     r++;
    triangle (200,b,20,20,60,60); 
    
    if (arduinoinfo < 70) {
      fill(random(0,255),random(0,25),random(0,200));
       noStroke();
      rect(random(0,width),0,width,height);
     
    }
     
    else if(arduinoinfo < 40) {
      
      fill(random(0,255));
       noStroke();
      rect(0,0,8000,8000);
    }
     
    
     popMatrix();
     
    
   
           }


 
 ///// https://processing.org/tutorials/trig/      //////


 