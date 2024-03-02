/*
  This Library is written for Stepper Motor that uses ULN2003
  Author: Bonezegei (Jofel Batutay)
  Date:  March 2024
*/
#ifndef _BONEZEGEI_ULN2003_STEPPER_H_
#define _BONEZEGEI_ULN2003_STEPPER_H_
#include <Arduino.h>

#define MODE_FULL_STEP 0
#define MODE_HALF_STEP 1

class Bonezegei_ULN2003_Stepper {
public:
  //Param1 Input 1
  //Param1 Input 2
  //Param1 Input 3
  //Param1 Input 4
  Bonezegei_ULN2003_Stepper(int in1, int in2, int in3, int in4);

  //Initialize Pins
  bool begin();

  //set Speed in Milli Second
  void setSpeed(int speed);

  //step
  //Param1 Direction (Forward or Reverse)
  //Param2 Number of Steps
  void step(int dir, int steps);

  //Variables
  uint8_t _in1;          // Input 1
  uint8_t _in2;          // Input 2
  uint8_t _in3;          // Input 3
  uint8_t _in4;          // Input 4
  uint8_t _dir;          // Direction
  uint8_t _mode;         // Full Step or Half Step
  unsigned long _speed;  //Speed
};

#endif
