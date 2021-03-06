int trig = 2;
int echo = 3;
void setup() {
    Serial.begin(9600);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}

void loop() { 
    digitalWrite(trig, LOW);
    digitalWrite(echo, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    unsigned long dur = pulseln(echo, HIGH);
    float distance = dur / 29.0 / 2.0;

    Serial.print(distance);
    Serial.println("cm");

    delay(200);
    
}   