

int pin = 11;
int pin2 = 7;
int button = 5;
unsigned long ptime;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(button, INPUT);
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void Lights() {
   digitalWrite(pin, HIGH);
   digitalWrite(pin2, HIGH);
   delay(30000);
   digitalWrite(pin, LOW);
   delay(30000);
   digitalWrite(pin2, LOW);
}

// the loop function runs over and over again forever
void loop() {
  int bstate = digitalRead(button);
  if (bstate == LOW) {
     Lights();
  }
}
