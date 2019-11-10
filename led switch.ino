int led = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;
int led11 = 3;
int buttonPin = 2;


void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
pinMode(led11,OUTPUT);
pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led, HIGH);
}
else {
digitalWrite(led, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led2, HIGH);
}
else {
digitalWrite(led2, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led3, HIGH);
}
else {
digitalWrite(led3, LOW);
}

  if (digitalRead(buttonPin) == LOW) {
digitalWrite(led4, HIGH);
}
else {
digitalWrite(led4, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led5, HIGH);
}
else {
digitalWrite(led5, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led6, HIGH);
}
else {
digitalWrite(led6, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led7, HIGH);
}
else {
digitalWrite(led7, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led8, HIGH);
}
else {
digitalWrite(led8, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led9, HIGH);
}
else {
digitalWrite(led9, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led10, HIGH);
}
else {
digitalWrite(led10, LOW);
}

if (digitalRead(buttonPin) == LOW) {
digitalWrite(led11, HIGH);
}
else {
digitalWrite(led11, LOW);
}
}

