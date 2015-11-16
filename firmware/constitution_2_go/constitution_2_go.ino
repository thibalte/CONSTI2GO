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
