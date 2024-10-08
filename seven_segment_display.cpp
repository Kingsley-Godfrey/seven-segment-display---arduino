int pinE = 1;
int pinD = 2;
int pinC = 3;
int pinDP = 4;
int pinB = 5;
int pinA = 6;
int pinF = 7;
int pinG = 9;


// void testFunction() {
//   digitalWrite(pinA, HIGH);
//   digitalWrite(pinB, HIGH);
//   digitalWrite(pinC, HIGH);
//   digitalWrite(pinD, HIGH);
//   digitalWrite(pinE, HIGH);
//   digitalWrite(pinF, HIGH);
//   digitalWrite(pinG, HIGH);
//   digitalWrite(pinDP, HIGH);
// }

void zero() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
}
void one() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}
void two() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}
void three() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);
}
void four() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void five() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void six() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void seven() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}
void eight() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void nine() {
  digitalWrite(pinDP, LOW);
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}
void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
}

void loop() {
  zero();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
  six();
  delay(500);
  seven();
  delay(500);
  eight();
  delay(500);
  nine();
  delay(500);
}
