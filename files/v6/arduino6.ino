int potPin = A5;
int led1Pin = 4;
int led2Pin = 3;
int led3Pin = 2;
void setup()
{
  pinMode(potPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int potMeasure = analogRead(A5);
  Serial.println(potMeasure);
  if(potMeasure > 0 && potMeasure < 341)
  {
    digitalWrite(led1Pin,HIGH);
    digitalWrite(led2Pin,LOW);
    digitalWrite(led3Pin,LOW);
  }
  else if(potMeasure > 340 && potMeasure < 682)
  {
    digitalWrite(led1Pin,HIGH);
    digitalWrite(led2Pin,HIGH);
    digitalWrite(led3Pin,LOW);
  }
  else if(potMeasure > 681 && potMeasure < 1024)
  {
    digitalWrite(led1Pin,HIGH);
    digitalWrite(led2Pin,HIGH);
    digitalWrite(led3Pin,HIGH);
  }
}