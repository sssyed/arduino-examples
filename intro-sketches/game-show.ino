//  Game Show
//
// Made by Syed Salahuddin
// License: CC-BY-SA 3.0

// constants won't change. They're used here to
// set pin numbers:
const int buttonPlayer2 = A0;     //
const int buttonPlayer1 = A1;
const int buzzerPlayer1 = 9;      //
const int buzzerPlayer2 = 1;


void setup() {
  // initialize the buzzer pin as an output:
  pinMode(buzzerPlayer1, OUTPUT);
  pinMode(buzzerPlayer2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPlayer1, INPUT);
  pinMode(buttonPlayer2, INPUT);
  // Get a random number

}


void loop(){
  // read the state of the pushbutton value:
  digitalWrite(buzzerPlayer1, LOW);
  digitalWrite(buzzerPlayer2, LOW);

  if(digitalRead(buttonPlayer1) == HIGH){
    buzz(1);
    delay(100);
  } else if(digitalRead(buttonPlayer2) == HIGH){
    buzz(2);
    delay(100);
  }
}


void buzz(int playerNumber){

  if(playerNumber == 1){
    digitalWrite(buzzerPlayer1, HIGH);
  } else if(playerNumber){
    digitalWrite(buzzerPlayer2, HIGH);
  }

}
