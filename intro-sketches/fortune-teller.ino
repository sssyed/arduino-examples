    // Made by Syed Salahuddin
    // License: CC-BY-SA 3.0

    /*
      Fortune teller

     The circuit:

     */

    // set pin numbers to represent our bits:
    const int buttonPin = A0;
    const int servoPin = 5;
    const int i = 0;

    int buttonState = 0;
    int randomNumber = 0;
    bool getRandomNumber = false;


    void setup() {
      // initialize the Servo as an output:
      pinMode(servoPin, OUTPUT);

      // initialize the pushbutton pin as an input:
      pinMode(buttonPin, INPUT);
    }

    void loop(){

      if(getRandomNumber == false){
        attractMode();
      }

      // read the state of the pushbutton value:
      buttonState = digitalRead(buttonPin);
      if(getRandomNumber == false){
      	randomNumber = random(3);
        delay(100);
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
      analogWrite(5, 0);
      analogWrite(5, 125);
      analogWrite(5, 230);

      if(fortune == 0){
        analogWrite(5, 0);
        delay(2000);
      } else if(fortune == 1) {
        //no
        analogWrite(5, 125);
        delay(2000);
        } else {
        //maybe so
        analogWrite(5, 230);
        delay(2000);
      }
      getRandomNumber = false;

    }

    void attractMode(){
        analogWrite(5, 0);
        delay(255);
        analogWrite(5, 128);
        delay(128);
        analogWrite(5, 245);
        delay(255);
    }
