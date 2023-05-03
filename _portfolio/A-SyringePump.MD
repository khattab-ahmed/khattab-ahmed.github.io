---
title: "Low cost 3D printed Syringe Pump "
excerpt: "Class Project"
header:
  image: "/assets/img/SyringeRender.png"
  teaser: /assets/img/SyringeRender.png
gallery:
  - url: /assets/img/SyringePump1.JPG
    image_path: assets/img/SyringePump1.JPG
    alt: "placeholder image 1"
  - url: /assets/img/SyringePump2.JPG
    image_path: assets/img/SyringePump2.JPG
    alt: "placeholder image 2"
  
---

The purpose of this project was to create a functional, accurate, and cost-efficient syringe pump using the available materials in the Vanderbilt Digital Fabrication Lab for my Rapid Prototyping course. Various tools such as Autodesk Fusion 360, a Voron printer, a stepper motor, and an arduino amongst other materials were used to complete this project. The Syringe pump excedded project requirenment by allowing the operater dispense liquit from both syringes at the same time while also automatically stopping the motor when th syringes were near empty. The functions of the pump are as follows:

* The ability to drive liquid at a specific flow rate
* Hold both a 5 mL and a 20 mL syringe
* Would cost about 50 dollars or less to replicate.
* Includes a button that controls the stop and start.
* Includes an LED that indicates the condition of the syringe pump
* Includes two buttons with the ability to move the motor clockwise and counterclockwise so that the syringe pump would not need to be reset by hand. 

# Operation Procedure 

1. Load the desired syringe into its appropriate holder mounts. Ensure that the syringe is locked into the hole for the tip of the syringe. Additionally, verify that the back of the syringe is snugly fit into the back mount and that the plunger is slotted into its respective hole piece.  
2. Plug in the power supply to provide power to the system. The LED should turn yellow.
3. To begin operation, press buttons to move the lead screw in either direction. Button closer to the motor spins counter clockwise and retracts the nut that pushes the end of the syringes. The other button does the opposite and engages the syringes to dispense fluid. 
4. LED should turn green the syringes will be dispensse until the limit switch is pressed. This will immediately stop all movement of the system, and the LED will turn red. 
8. At this point only the disengaging button can be pressed so that the syringes can be replaced 
9. When completely finished with operation, unplug the power supply and store in a safe location. 


# Arduino Code

```cpp
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

```

# CAD Model
<iframe src="https://a360.co/3WfaQSP" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Components

| 3D Printed  | Quanity |
| ------------- | ------------- |
| Electronics housing (PLA)  | 1 |
| Motor mount (ABS)  | 1 |
| Syringe mounting brackets (PLA)  | 3 |

| Off-the-shelf  | Quanity |
| ------------- | ------------- |
| 2mm Lead Screw  | 1 |
| 1/4" x 8mm Flexible Coupling  | 1  |
| 200mm linear rod (8 mm diameter)  | 1  |
| Linear bearing (8 mm diameter) | 1  |
| 2040 Aluminum Extrusion 1'  | 1  |
| Nema 17 Stepper Motor  | 1  |
| Arduino Uno  | 1  |
| A4988 Stepper Driver  | 1  |
| Small Breadboard  | 1  |
| Latching Push Buttons  | 2  |
| Limit Switch  | 1  |
| RGB Common Cathode LED  | 1  |


{% include gallery caption="This is a sample gallery to go along with this case study." %}
 
