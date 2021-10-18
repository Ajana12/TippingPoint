/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       2602E                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Tank Drive                                                */
/*    This sample allows you to control the V5 Clawbot using the both         */
/*    joystick. Adjust the deadband value for more accurate movements.        */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// LeftUp               motor         1               
// LeftDown             motor         2               
// RightUp              motor         3               
// RightDown            motor         4               
// ArmLeft              motor         5               
// ArmRight             motor         6               
// MogoLift             motor         7               
// Motor8               motor         8               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();


  int deadband = 5;

  while (true) {
    Brain.Screen.newLine();
    Brain.Screen.print("Driver Control");

  
    int yes = Controller1.Axis3.position();
  
    int no = Controller1.Axis2.position();

   
    if (abs(yes) < deadband) {
    
      LeftUp.setVelocity(0, percent);
      LeftDown.setVelocity(0, percent);
    } else {
  
      LeftUp.setVelocity(yes, percent);
      LeftDown.setVelocity(yes, percent);
    }

  
    if (abs(no) < deadband) {
    
      RightUp.setVelocity(0, percent);
      RightDown.setVelocity(0,pct);
    } else {
     
      RightUp.setVelocity(no, percent);
      RightDown.setVelocity(no,percent);
    };
    //ArmLeft
    if (Controller1.ButtonL1.pressing()){ //arm is moving in upward motion
      ArmLeft.spin(forward,100,pct);
      ArmRight.spin(forward,100,pct);
    
    
  } else{
      ArmLeft.stop(brake);
      ArmRight.stop(brake);
    }
    //ArmRight
    if (Controller1.ButtonL2.pressing()){ //arm is moving in downward motion
      ArmLeft.spin(reverse,100,pct);
      ArmRight.spin(reverse,100,pct);
    }
    else{
      ArmLeft.stop(brake);
      ArmRight.stop(brake);
    }
    //Mogolift
    if (Controller1.ButtonR2.pressing()){
      MogoLift.spin(forward,100,pct);  //Mogo Lift Forward, ready to pickup riser
    }
    else

    MogoLift.stop(brake); //no motion directed to the MogoLift
    }
    if (Controller1.ButtonR1.pressing()){
      ArmLeft.spin(reverse, 100,pct);
    }
    else{
      ArmLeft.stop(brake);
    }



  if (Controller1.ButtonX.pressing()){
    Motor8.spin (forward,100,pct);
  
  }
  if (Controller1.ButtonA.pressing()){
    Motor8.stop();
    
  }


  


    



    LeftUp.spin(forward);
    RightUp.spin(forward);
    LeftDown.spin(forward);
    RightDown.spin(forward);
    ArmLeft.spin(forward);
    ArmRight.spin(forward);
    MogoLift.spin(forward);



    wait(25, msec);
  
  }
