#include "Spindle.h"
#include "../RobotMap.h"
#include "../Commands/PickUpBall.h"

Spindle::Spindle() :
		Subsystem("ExampleSubsystem")
{
	this->spindle = new Victor(SPINDLE);
}

void Spindle::setSpeed(double speed) {
	spindle->SetSpeed(speed);
}

void Spindle::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new PickUpBall());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
