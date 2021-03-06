#pragma config(Motor,  port3,           Motor10,       tmotorVex393, openLoop, reversed)
#pragma config(Motor,  port5,           Motor5,        tmotorVex393, openLoop)
#pragma config(Motor,  port6,           Motor6,        tmotorVex393, openLoop)
#pragma config(Motor,  port7,           Motor7,        tmotorVex393, openLoop)
#pragma config(Motor,  port8,           Motor8,        tmotorVex393, openLoop)
#pragma config(Motor,  port9,           Motor9,        tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!

/////////////////////////////////////////////////////////////////////////////////////////
//
//                          Pre-Autonomous Functions
//
// You may want to perform some actions before the competition starts. Do them in the
// following function.
//
/////////////////////////////////////////////////////////////////////////////////////////

void pre_auton()
{
  // Set bStopTasksBetweenModes to false if you want to keep user created tasks running between
  // Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
  bStopTasksBetweenModes = true;

	// All activities that occur before the competition starts
	// Example: clearing encoders, setting servo positions, ...
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Autonomous Task
//
// This task is used to control your robot during the autonomous phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task autonomous()
{
  // .....................................................................................
  // Insert user code here.
  // .....................................................................................

	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

/////////////////////////////////////////////////////////////////////////////////////////
//
//                                 User Control Task
//
// This task is used to control your robot during the user control phase of a VEX Competition.
// You must modify the code to add your own robot specific commands here.
//
/////////////////////////////////////////////////////////////////////////////////////////

task usercontrol()
{
	// User control code here, inside the loop

	while (true)
	{
// your program should update motor + servo values based on feedback from the joysticks.

	  // .....................................................................................
	  // Insert user code here. This is where you use the joystick values to update your motors, etc.
				  // .....................................................................................
	
  {
    motor[Motor6]  = (vexRT[Ch2] + vexRT[Ch1])/2;  
    motor[Motor5] = (vexRT[Ch2] - vexRT[Ch1])/2; 
  }
		  if(vexRT[Btn6U])      //If button 5U is pressed:
		  {
		    motor[Motor10] = motor[Motor9] = 127;         //run motor port 5 at quarter speed (i.e. lift an arm)
		  }
		  else if(vexRT[Btn6D]) //If button 5D is pressed:
		  {
		    motor[Motor10] = motor[Motor9] = -127;        //run motor port 5 at quarter speed reversed (i.e. lower an arm)
		  }
		  else                       //If neither buttons 5U or 5D are pressed:
		  {
		    motor[Motor10] = motor[Motor9] = 0; 
		  }
		  if(vexRT[Btn5U])      //If button 5U is pressed:
		  {
		    motor[Motor7] = 127;         //run motor port 5 at quarter speed (i.e. lift an arm)
		  }
		  else if(vexRT[Btn5D]) //If button 5D is pressed:
		  {
		    motor[Motor7] = -127;        //run motor port 5 at quarter speed reversed (i.e. lower an arm)
		  }
		  else                       //If neither buttons 5U or 5D are pressed:
		  {
		    motor[Motor7] = 0; 
		  }
  
	}
}
