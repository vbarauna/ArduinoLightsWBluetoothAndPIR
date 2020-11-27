int key = 5, val = 0;
int inputPin = 7; 
int pirState = LOW;
int RELE_PIN = 63;

void setup() {
    Serial.begin(9600);
    pinMode(key,0UTPUT);
    digitalWrite (key, HIGH);
    pinMode(RELE_PIN, OUTPUT);
    pinMode (input Pin, INPUT);
} 

void loop1(){
    val=Serial.read();

    if (val=='A'){
        digitalWrite (key,LOW);
    }

    if (val=='D') {
        digitalWrite (key, HIGH);
    }
}

void loop2(){
    val = digitalRead (inputPin);
    if(val == HIGH){
        digitalWrite(RELE_PIN, LOW);
        delay(15000);
    if(pirState == LOW){
        Serial.println("Motion detected!");
        pirState = HIGH;
    }
}
    else{
        digitalWrite(RELE_PIN, HIGH);
        delay(30);
        if (pirState == HIGH){
            Serial.println("Motion ended!");
            pirState = LOW;
        }
    }
}