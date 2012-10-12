#include "JoystickDriver.c"





#define B_BUTTON 3



void moveR(){
	getJoystickSettings(joystick);
   do {
     	if (joy1Btn(B_BUTTON) == true){
   motor[motorB] = 200;
 }
  else {
   motor[motorA] = 0;
 }
 	getJoystickSettings(joystick);
 } while(joy1Btn(B_BUTTON) == true);
}








#define X_BUTTON 1


void moveL(){
	getJoystickSettings(joystick);

	do
	{
		if (joy1Btn(X_BUTTON) == true)
		{
		 	motor[motorA] = 200;
		}
		else
		{
			motor[motorB] = 0;
		}
	getJoystickSettings(joystick);

} while(joy1Btn(X_BUTTON) == true);
}







#define Y_BUTTON 4


void moveS(){
	getJoystickSettings(joystick);
	do {
	if (joy1Btn(Y_BUTTON) == true){
	 motor[motorA] = 200;
	 motor[motorB] = 200;
}
	else {
		motor[motorA] = 0;
		motor[motorB] = 0;
}
	getJoystickSettings(joystick);
} while(joy1Btn(Y_BUTTON) == true);
}








#define A_BUTTON 2


void moveB(){
	getJoystickSettings(joystick);
	do {
	if (joy1Btn(A_BUTTON) == true){
	 motor[motorA] = -200;
	 motor[motorB] = -200;
}
	else {
		motor[motorA] = 0;
		motor[motorB] = 0;
}
	getJoystickSettings(joystick);
} while(joy1Btn(A_BUTTON) == true);
}







task main()
{

while(true)
{
	motor[motorA] = 100;
	motor[motorB] = -100;
	wait1Msec(1000);
}

}
