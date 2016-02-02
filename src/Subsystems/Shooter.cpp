#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/Shoot.h"

Shooter::Shooter() :
		Subsystem("ExampleSubsystem")
{
	this->lower_shooter = new Talon(LOWER_SHOOTER);
	this->upper_shooter = new Talon(UPPER_SHOOTER);
}

void Shooter::SetSpeed(double speed)
{
	this->lower_shooter->SetSpeed(speed);
	this->upper_shooter->SetSpeed(-speed);
}

void Shooter::InitDefaultCommand()
{
	SetDefaultCommand(new Shoot());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
