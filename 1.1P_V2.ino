
int pin = 11;
int pin2 = 7;
unsigned long ptime;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void porch() {
   digitalWrite(pin2, HIGH);
   delay(1000);
   digitalWrite(pin2, LOW);
}
void hallway() {
   digitalWrite(pin, HIGH);
   delay(1000);
   digitalWrite(pin, LOW);
}

// the loop function runs over and over again forever
void loop() {
  ptime = millis();
  if (ptime <= 30000) {
    hallway();
    porch();
  }
  if (ptime > 30000 && ptime <= 60000) {
     hallway();
     delay(1000);
  }
}
