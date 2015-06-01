//  Game Show
//
// Made by Syed Salahuddin
// License: CC-BY-SA 3.0

//let's tell our arduino which input and output snaps we're working with.
const int buttonPlayer2 = A0;   //input button on a0, needs power
const int buttonPlayer1 = A1;	//input buttonon a1, needs power
const int buzzerPlayer1 = 9;    //output buzzer on d9
const int buzzerPlayer2 = 1;	//output buzzer on d1


void setup() {
  // initialize the buzzers as output:
  pinMode(buzzerPlayer1, OUTPUT);
  pinMode(buzzerPlayer2, OUTPUT);
  // initialize the pushbutton as input:
  pinMode(buttonPlayer1, INPUT);
  pinMode(buttonPlayer2, INPUT);
}


void loop(){
  //let's reset our buzzers
  digitalWrite(buzzerPlayer1, LOW);
  digitalWrite(buzzerPlayer2, LOW);

  // read the state of the pushbutton value for the first:
  if(digitalRead(buttonPlayer1) == HIGH){
    //buzz!
    digitalWrite(buttonPlayer1, HIGH);
    delay(100);
  } else if(digitalRead(buttonPlayer2) == HIGH){
    //buzz!
    digitalWrite(buttonPlayer2, HIGH);
    delay(100);
  }
}
