//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// buttons
// 
// Made by Syed Salahuddin
// License: CC-BY-SA 3.0
// Downloaded from: http://123d.circuits.io/circuits/779592-buttons

/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int randomNumber = 0;		// generate random number that's between 0 - 2
bool getRandomNumber = false;
bool blinkOn = false;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
  // Get a random number

}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if(getRandomNumber == false){
  	randomNumber = random(3);
  } 
 
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) { 
    Serial.print(randomNumber);
    delay( 1000 );
    getRandomNumber = true;
    if (randomNumber == 1){ 
    	// turn LED on : TRUE STATE    
    	digitalWrite(ledPin, HIGH);  
    } else if(randomNumber == 2){
        // blink LED : MAYBE STATE
      	blinkOn = true; 
    } else {
      	// turn LED off : FALSE STATE    
      	digitalWrite(ledPin, LOW);
      	//TODO SET BUZZER HIGH
    }
  } 
  
  // we call our function to check if we blink our LED or not.
  if (blinkOn){
  	blink();
  }
  
}

// this is a function we wrote it creates the side effect of blinking an led
void blink(){
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
