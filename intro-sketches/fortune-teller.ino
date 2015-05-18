  // Made by Syed Salahuddin
  // License: CC-BY-SA 3.0

  /*
    Fortune teller

   The circuit:

   */

  // set pin numbers to represent our bits:
  const int buttonPin = A0;     // the number of the pushbutton pin
  const int servoPin = 5;    // the number of the Optional Buzzer pin
  const int i = 0;

  int buttonState = 0;     // data for storing if our button has been pressed.
  int randomNumber = 0;		//  data for storing a "random" number.
  bool getRandomNumber = false;
  bool servo = false;
  bool changeDirection = false;


  void setup() {
    // initialize the Servo as an output:
    pinMode(servoPin, OUTPUT);

    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);
    // Get a random number

  }

  void loop(){
    digitalWrite(5, 0);


    if(getRandomNumber == false){
      //attractMode();
    }

    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);
    if(getRandomNumber == false){
    	randomNumber = random(3);
    }

    if (buttonState == HIGH) {
      Serial.print(randomNumber);
      getRandomNumber = true;

      if (randomNumber == 1){
        moveServo(1);  // moveServo to TRUE state
      } else if(randomNumber == 2){
        moveServo(2); // moveServo to MAYBE state
      } else {
        moveServo(0); // movesServo to FALSE state
      }
    }
  }

  void moveServo(int fortune){

    if(fortune == 1){
      digitalWrite(5, 0);
      delay(500);
    } else if(fortune == 2) {
      //turn thumb to down position
      digitalWrite(5, 125);
      delay(500);
      } else {
      //turn thumb sides as "maybe"
      digitalWrite(5, 255);
      delay(500);
    }
  }

  void attractMode(){
    digitalWrite(5, 0);
    delay(500);

    digitalWrite(5, 125);
    delay(500);

    digitalWrite(5, 255);
    delay(500);
  }
