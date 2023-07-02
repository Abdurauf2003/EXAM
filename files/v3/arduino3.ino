#define LED 9
#define pot A0
int potReading = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
    pinMode(pot, INPUT);
}
void loop()
{ 
    potReading = analogRead(pot);
    potReading = map(potReading, 0,1023,0,255);
    Serial.println(potReading);
    analogWrite(LED, potReading);
}