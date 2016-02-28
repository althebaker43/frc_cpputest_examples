/*
 * WPILib.cpp
 *
 *  Created on: Feb 6, 2016
 *      Author: allen
 */

#include "WPILib.h"

#include "CppUTestExt/MockSupport.h"


SampleRobot::SampleRobot()
{
}

SampleRobot::~SampleRobot()
{
}

bool
SampleRobot::IsOperatorControl()
{
	return mock().actualCall("IsOperatorControl").onObject(this).returnIntValue();
}

bool
SampleRobot::IsEnabled()
{
	return mock().actualCall("IsEnabled").onObject(this).returnIntValue();
}


Joystick::Joystick(
		uint32_t port
		)
{
}


RobotDrive::RobotDrive(
		uint32_t leftMotorChannel,
		uint32_t rightMotorChannel
		)
{
}

void
RobotDrive::SetExpiration(
		double time
		)
{
}

void
RobotDrive::ArcadeDrive(
		Joystick& stick
		)
{
}


void
Wait(double time)
{
}
