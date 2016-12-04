const int ledPin13 = 13; //lampu yang tersambung dipanel 12
int analogValue = A0; // variable to hold the analog value
void setup() {
// open the serial port at 9600 bps:
Serial.begin(9600);
pinMode(ledPin13, OUTPUT);
}
void loop() {
// read the analog input on pin 0:
analogValue = analogRead(0);
Serial.println(analogValue); // debug value
if (analogValue >= 500) {
digitalWrite(ledPin13, HIGH);
}
else if (analogValue < 100) {
digitalWrite(ledPin13, LOW);
}
}

