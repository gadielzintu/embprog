// Assignment 1 Hello World
// Embedded Systems Semester 1 EMST

// Set pin numbers
const int ledpin = 2;    // blue led on devboard
const int led1 = 23;     // led 1
const int led2 = 22;     // led 2
const int led3 = 21;     // led 3
const int led4 = 4;      // led 4
const int button1 = 34;  // button 1
const int button2 = 35;  // button 2
int button1state = LOW;
int button2state = LOW;
bool b1 = false;
bool b2 = false;
bool firstTimeB1 = false;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {

  button1state = digitalRead(button1);
  button2state = digitalRead(button2);
  if(button1state == HIGH){b1 = true;}else{b1 = false;}
  if(button2state == HIGH){b2 = true;}else{b2 = false;}

  if (b1) {
    if (!b2) {
      LEDs();
    }
  }
}


void LEDs() {
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);
}