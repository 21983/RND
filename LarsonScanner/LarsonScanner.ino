int leds[] = {0,1,2,3,4,5,6,7};
bool rightToLeft = false;
int lampje;

void setup() {
  // put your setup code here, to run once:
 for(int j = 0; sizeof(leds) > j; j++)
 {
   pinMode (j,OUTPUT);
 }
}
void BlinkLed(int i)
{
    digitalWrite(i, HIGH);
    delay(40);
    digitalWrite(i, LOW);
}
void loop() {

 for(int i = 0; i < 7; i++)
 {
  BlinkLed(i); 
 }


 for(int i = 7; i > 0; i--)
 {
  BlinkLed(i);
 }  

}

