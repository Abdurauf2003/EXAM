void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  analogWrite(11, 255);
  analogWrite(10, 0);
  analogWrite(9, 0);
  delay(2000); 
  analogWrite(11, 0);
  analogWrite(10, 255);
  analogWrite(9, 0);
  delay(5000);
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(9, 255);
  delay(10000); 
}