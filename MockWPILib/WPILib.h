/*
 * WPILib.h
 *
 *  Created on: Feb 6, 2016
 *      Author: allen
 */

#ifndef WPILIB_H_
#define WPILIB_H_

#include <stdint.h>

class SampleRobot
{
public:
	SampleRobot();
	virtual ~SampleRobot();
	bool IsOperatorControl();
	bool IsEnabled();
};

class Joystick
{
public:
	Joystick(uint32_t port);
};

class RobotDrive
{
public:
	RobotDrive(uint32_t leftMotorChannel, uint32_t rightMotorChannel);
	void SetExpiration(double time);
	void ArcadeDrive(Joystick& stick);
};

void Wait(double time);

#define START_ROBOT_CLASS(robot)

#endif /* WPILIB_H_ */
