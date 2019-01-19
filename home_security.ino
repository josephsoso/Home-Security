/*This the property of Narada LTD
 * it has been developed for home security purpose
 * it is dual technology is a collection of our former home security 
 * in its developmemnt we tried to reduce false alarm
 * developen in July,2018 for Narada LTD, www.naradaelectronics.com
 */

int relay=13;
int microwaveSensor;
int pirSensor;
//int value=0;

void setup()
{
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
   pinMode(microwaveSensor,OUTPUT);
    pinMode(pirSensor,OUTPUT);
}
void loop()
{
 microwaveSensor=analogRead(A5);
pirSensor=analogRead(A2);
 if((microwaveSensor>500)&&(pirSensor>500))

 {
  
 
  digitalWrite(relay,HIGH);


 }
 else
 {
  digitalWrite(relay,LOW);
 
  
  
 }

 
}
