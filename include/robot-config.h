using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;
// balls
//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern motor intake1;
extern motor intake2;
extern motor_group Intakes;
extern digital_out clamps;
extern motor intakeL;
extern controller Controller1;

void  vexcodeInit( void );