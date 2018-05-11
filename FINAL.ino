int sensorPin =0;
int val = 0;

void setup () {
  Serial.begin (9600);

  
}



void loop () {
  val = analogRead (sensorPin);
val = (val );


 

if (val > 350) {
  val = 1;}

 else if (val < 350) {
    val =0;}

Serial.println (val) ;  //serial monitor



//Serial.write (val);
    delay (200);
}

