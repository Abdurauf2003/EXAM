int val1; 
int val2;
int val3;
void setup() {
    pinMode(12,INPUT);
    pinMode(9,INPUT);
    pinMode(5,INPUT);
    int led1=11;
    int led2=8;
    int led3=4;
    pinMode(11,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(13,OUTPUT);
}               
void loop() {
    val1 = digitalRead(12);
    val2 = digitalRead(9);
    val3 = digitalRead(5);
    if(val1 == HIGH) {
        digitalWrite(11,HIGH);
        digitalWrite(8,LOW);
        digitalWrite(4,LOW);
    } else if(val2 == HIGH) {
        digitalWrite(8,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(4,LOW);
    } else if(val3 == HIGH) {
        digitalWrite(4,HIGH);
        digitalWrite(11,LOW);
        digitalWrite(8,LOW);
    } else {
        digitalWrite(13,HIGH);
    }
}