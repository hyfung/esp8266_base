#define RED 15
#define YELLOW 13
#define GREEN 12
#define WHITE 14
#define BTN_A 2
#define BTN_B 0

#define a_pressed digitalRead(BTN_A)
#define b_pressed digitalRead(BTN_B)

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(WHITE, OUTPUT);

  pinMode(BTN_A, INPUT);
  pinMode(BTN_B, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
