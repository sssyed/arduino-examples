/*
** @title: push my push button
** @author: @sssyed
** @license: CC-BY-SA 3.0
*/

int button = A0;

void setup(){

  Serial.begin(9600);
  pinMode(button, INPUT);

}

void loop(){

  Serial.println(analogRead(button));

}
