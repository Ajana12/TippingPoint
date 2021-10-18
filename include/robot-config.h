using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor LeftUp;
extern motor LeftDown;
extern motor RightUp;
extern motor RightDown;
extern motor ArmLeft;
extern motor ArmRight;
extern motor MogoLift;
extern motor Motor8;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );