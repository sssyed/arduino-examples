/*
** @title: push my push button
** @author: @sssyed
** @license: CC-BY-SA 3.0
*/

int bargraph = 5;

void setup(){

  Serial.begin(9600);
  pinMode(bargraph, OUTPUT);

}

void loop(){

  analogWrite(bargraph, 1023);


}
