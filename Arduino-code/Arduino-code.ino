int blue=11; //blue-led pin
int green=13;//green-led pin
int red=12; //red-Led pin
int v1; //value 1
int v2; //value 2
int v3; //value 3
int b=2; // pushbutton pin 

void setup() {
  Serial.begin(9600);
  pinMode(b,INPUT_PULLUP);
  Serial.println("Generating New Color");
 pinMode (blue,OUTPUT);
 pinMode(red,OUTPUT);
 pinMode(green,OUTPUT);
randomSeed(analogRead(0));
}
void loop() {
  if (digitalRead(b)==0){
    
 v1= random(0,255); //generating random number between 0 to 255
  v2= random(0,255);
   v3= random(0,255);
   analogWrite(red,v1);
   analogWrite(blue,v2);
   analogWrite(green,v3);
  }
  

}