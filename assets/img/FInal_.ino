// Rapid Prototyping Syringe Pump Project
#include <AccelStepper.h>
AccelStepper stepperX(AccelStepper::DRIVER,11,12);

int red_LED_pin=7;
int green_LED_pin=6;
int CWbutton_pin=4;
int CCWbutton_pin=5;
int limitSwitch=2;

double bigSyringeFlowRate=.002717/4;
double smallSyringeFlowRate=.001038/4;
double flowRate=1;// ml/min
float velocity=(flowRate/60)/bigSyringeFlowRate;// steps/sec

void setup() {
 stepperX.setMaxSpeed(1000); //steps/sec = Max:5 rev/sec
 stepperX.setSpeed(velocity); //50/200= 1/4 rev/sec= 4sec for 1 rev
 //stepperX.moveTo(400); //Moves 400 steps 

 pinMode(red_LED_pin,OUTPUT);
 pinMode(green_LED_pin,OUTPUT);
 pinMode(CWbutton_pin, INPUT_PULLUP);
 pinMode(CCWbutton_pin, INPUT_PULLUP);
 pinMode(limitSwitch, INPUT_PULLUP);
}

void loop() {

if (digitalRead(CWbutton_pin) == HIGH ){
  analogWrite(green_LED_pin, 150);
  analogWrite(red_LED_pin, 150);
 }

if(digitalRead(limitSwitch) == LOW){
  if (digitalRead(CWbutton_pin) == LOW ){
   analogWrite(green_LED_pin, 200);
   analogWrite(red_LED_pin, 0);
   stepperX.setSpeed(velocity);
   stepperX.runSpeed();
    //stepperX.run();
  }
}

 if(digitalRead(limitSwitch) == HIGH) {
  analogWrite(green_LED_pin,0);
  analogWrite(red_LED_pin,200);

 }
if (digitalRead(CCWbutton_pin) == LOW ){
    analogWrite(green_LED_pin, 200);
    analogWrite(red_LED_pin, 0);
    stepperX.setSpeed(-velocity);
    stepperX.runSpeed();
    }
}
