int ledPin = 5;  
int ledPin2 = 3;
void setup() {
    pinMode(ledPin, OUTPUT);   
    pinMode(ledPin2, OUTPUT);   
}
void loop() {
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
        analogWrite(ledPin, fadeValue);
        delay(30);
    }
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
        analogWrite(ledPin, fadeValue);
        delay(30);
    }
    for (int fadeValue = 0 ; fadeValue <= 255; fadeValue = fadeValue+5) {
        analogWrite(ledPin2, fadeValue);
        delay(30);
    }
    for (int fadeValue = 255 ; fadeValue >= 0; fadeValue = fadeValue-5) {
        analogWrite(ledPin2, fadeValue);
        delay(30);
    }
}