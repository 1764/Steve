#include "Riser.h"
#include "../RobotMap.h"
#include "../Commands/MoveBelts.h"

Riser::Riser() :
	Subsystem("ExampleSubsystem")
{
	this->back_top_riser = new Jaguar(BACK_TOP_RISER);
	this->back_bottom_riser = new Victor(BACK_BOTTOM_RISER);
	this->front_riser = new Victor(FRONT_RISER);
}

void Riser::SetSpeed(double speed)
{
	back_top_riser->SetSpeed(-speed);
	back_bottom_riser->SetSpeed(-speed);
	front_riser->SetSpeed(speed);
}

void Riser::InitDefaultCommand()
{
	SetDefaultCommand(new MoveBelts());
}
