#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	driver_joystick = new Joystick(DRIVER_JOYSTICK_PORT);
	copilot_joystick = new Joystick(COPILOT_JOYSTICK_PORT);
}

double OI::getDriverJoystickX()
{
	return driver_joystick->GetX();
}

double OI::getDriverJoystickY()
{
	return driver_joystick->GetY();
}

double OI::getDriverJoystickZ()
{
	return driver_joystick->GetZ();
}

double OI::getCopilotThrottle()
{
	return copilot_joystick->GetRawAxis(2);
}

double OI::getCopilotJoystickY()
{
	return copilot_joystick->GetY();
}

bool OI::getCopilotTrigger()
{
	return copilot_joystick->GetTrigger();
}

bool OI::getDriverJoystickButton(int i)
{
	return driver_joystick->GetRawButton(i);
}

bool OI::getCopilotJoystickButton(int button)
{
	return copilot_joystick->GetRawButton(button);
}
