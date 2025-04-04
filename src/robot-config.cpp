#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
motor intake1 = motor(PORT5, ratio18_1, false);
motor intake2 = motor(PORT8, ratio18_1, true);
motor_group Intakes = motor_group(intake1, intake2);
digital_out clamps = digital_out(Brain.ThreeWirePort.A);
motor intakeL = motor(PORT6, ratio6_1, false);
controller Controller1 = controller(primary);
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}