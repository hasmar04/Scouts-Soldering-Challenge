/*
  Scouts-Soldering-Challenge Board Test

  The button enables the LEDs on the board, and all LEDs should light up when the button is pressed. 

  Based off the Arduino Example "Button"
  Created by Harrison "Turtle" Asmar

  Version 1 - 10/06/2023
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin
const int ledRed = 13;    // the number of the LED pin
const int ledYellow = 12;    // the number of the LED pin
const int ledGreen = 11;    // the number of the LED pin
const int ledMaroon = 10;    // the number of the LED pin
const int ledOrange = 9;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledMaroon, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledYellow, HIGH);
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledMaroon, HIGH);
    digitalWrite(ledOrange, HIGH);
    Serial.println("HIGH");
  } else {
    // turn LED off:
    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledMaroon, LOW);
    digitalWrite(ledOrange, LOW);
  }
}
