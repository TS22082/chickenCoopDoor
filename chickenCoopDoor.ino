#include <Stepper.h>

const int buttonUp = 2;
const int buttonDown = 3;
const int bottomLimit = 4;
const int topLimit = 5;

const int stepsPerRevolution = 32;

const int blue = 8;
const int pink = 9;
const int yellow = 10;
const int orange = 11;

Stepper doorStepperMotor = Stepper(stepsPerRevolution, blue, pink, yellow, orange);

void setup() {
  pinMode(buttonUp, INPUT);
  pinMode(buttonDown, INPUT);
  pinMode(bottomLimit, INPUT);
  pinMode(topLimit, INPUT);

  pinMode(blue, OUTPUT);
  pinMode(pink, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(orange, OUTPUT);

  doorStepperMotor.setSpeed(30);
  Serial.begin(9600);
}

void loop() {
  int buttonUpPressed = digitalRead(buttonUp);
  if (buttonUpPressed == 1){
    while (digitalRead(topLimit) != 1){
      doorStepperMotor.step(1);
    }
    doorStepperMotor.step(-2);
    buttonUpPressed = 0;
  }

  int buttonDownPressed = digitalRead(buttonDown);
  if (buttonDownPressed == 1){
    while (digitalRead(bottomLimit) != 1){
      doorStepperMotor.step(-1);
    }
    doorStepperMotor.step(2);
    buttonDownPressed = 0;
  }
}
