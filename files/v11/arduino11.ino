#include <servo.h>
int push = 0;
Servo servo_9;
void setup()
{
    pinMode(2, INPUT);
    Serial.begin(9600);
    servo_9.attach(9, 500, 2500);
}
void loop() 
{
    push = digitalRead(2);
    Serial.println(push);
    if(push == 1) {
        servo_9.write(15);
    } else {
        servo_9.write(0);
    }
    delay(10);
}