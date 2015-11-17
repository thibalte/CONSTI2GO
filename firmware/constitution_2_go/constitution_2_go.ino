/**
 * CONSTI2GO, 2014, THIBAULT BREVET
 * released under the terms of the MIT License
 *
 * This code takes a char array and streams each characters
 * over the serial comm using ESC/POS commands.
 * The Teensy 3.1 is interfaced with the printer via a MAX3232 chip
 * (MAX232 works with regular Arduino's on 5V, Teensy 3.1 is 3.3V)
 *
 * A simple markup language is used for formatting the text:
 *
 * '*' - start inverted mode
 * '%' - stop inverted mode
 * '#' - newline
**/

int push = 12; // push button on pin 12

void setup ()
{
  Serial1.begin(57600); // serial speed
  pinMode(push, INPUT); // push as input
}

void loop(){
  // if push, print text
  if (digitalRead(push)) {
    c2go();
  }
  // wait a bit
  delay(50);
}
