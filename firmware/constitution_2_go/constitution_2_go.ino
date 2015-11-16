/*
 * CONSTI2GO, 2014, THIBAULT BREVET
 * released under the terms of the MIT License
 *
 * This code takes a char array and streams each characters over the serial comm using ESC/POS commands.
 * A simple markup language is used for formatting the text:
 *
 * '*' - start inverted mode
 * '%' - stop inverted mode
 * '#' - newline
 *
 */

int push = 12; // push button on pin 12

void setup ()
{
  Serial1.begin(57600);
  pinMode(push, INPUT);
}

void loop(){
  // if push, print text
  if (digitalRead(push)) {
    c2go();
  }
  delay(50);
}
