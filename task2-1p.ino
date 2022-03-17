void setup() {
    pinMode(D7, OUTPUT);
}

void loop() {
    StartSignal();
    delay(2000);
    LastName();
    delay(2000);
    EndSignal();
    delay(2000);
}

void LongSignal() {
     digitalWrite(D7, HIGH);
     delay(3000);
     digitalWrite(D7, LOW);
     delay(1000);
}

void ShortSignal() {
     digitalWrite(D7, HIGH);
     delay(1000);
     digitalWrite(D7, LOW);
     delay(1000);
}

void StartSignal() {
     LongSignal();
     ShortSignal();
     LongSignal();
     ShortSignal();
     LongSignal();
}

void LastName() {
    //MAK
    LongSignal();
    LongSignal();
    delay(3000);
    ShortSignal();
    LongSignal();
    delay(3000);
    LongSignal();
    ShortSignal();
    LongSignal();
    
}

void EndSignal() {
    ShortSignal();
    LongSignal();
    ShortSignal();
    LongSignal();
    ShortSignal();
}