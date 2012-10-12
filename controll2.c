#include "JoystickDriver.c"









#define B_BUTTON 3




void moveR(){
	getJoystickSettings(joystick);
   do {
     	if (joy1Btn(B_BUTTON) == true){

  		motorB = 200;
 }
  else {
   motorB = 0;
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
		 	motorC = 200;
		}
		else
		{
			motorC = 0;
		}
	getJoystickSettings(joystick);

} while(joy1Btn(X_BUTTON) == true);
}







#define Y_BUTTON 4


void moveS(){
	getJoystickSettings(joystick);
	do {
	if (joy1Btn(Y_BUTTON) == true){
	 motorB = 200;
	 motorC = 200;
}
	else {
		motorB = 0;
		motorC = 0;
}
	getJoystickSettings(joystick);
} while(joy1Btn(Y_BUTTON) == true);
}








#define A_BUTTON 2


void moveB(){
	getJoystickSettings(joystick);
	do {
	if (joy1Btn(A_BUTTON) == true){
	 motorB = -200;
	 motorC = -200;
}
	else {
		motorB = 0;
		motorC = 0;
}
	getJoystickSettings(joystick);
} while(joy1Btn(A_BUTTON) == true);
}







task main(){

while(true) {
 moveR();
 moveL();
 moveS();
 moveB();
}

}
