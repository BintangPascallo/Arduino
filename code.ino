// the setup function runs once when you press reset or power the board
int x = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {

  int btn1 = digitalRead(0);
  int btn2 = digitalRead(1);
  int btn3 = digitalRead(2);
  int btn4 = digitalRead(3);
  int btn5 = digitalRead(4);

  //LAMPU 1
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(250);
  digitalWrite(12, LOW);

  //LAMPU 2
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(250);
  digitalWrite(11, LOW);

  //LAMPU 3
  digitalWrite(10, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(250);
  digitalWrite(10, LOW);
}
