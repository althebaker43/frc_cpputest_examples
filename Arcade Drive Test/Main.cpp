/*
 * Main.cpp
 *
 *  Created on: Feb 6, 2016
 *      Author: allen
 */

#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"

#include "Robot.h"


int main(int argc, char* argv[])
{
	return CommandLineTestRunner::RunAllTests(argc, argv);
}


TEST_GROUP(Robot)
{
	void setup()
	{
	}

	void teardown()
	{
		mock().clear();
	}
};

TEST(Robot, FirstTest)
{
	Robot robot;

	mock().expectOneCall("IsOperatorControl").onObject(&robot).andReturnValue(false);
	robot.OperatorControl();

	mock().checkExpectations();
}
