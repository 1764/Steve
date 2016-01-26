#include "MoveBelts.h"

MoveBelts::MoveBelts()
{
	Requires(riser);
}

// Called just before this Command runs the first time
void MoveBelts::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void MoveBelts::Execute()
{
	riser->SetSpeed(oi->getCopilotJoystickY());
}

// Make this return true when this Command no longer needs to run execute()
bool MoveBelts::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MoveBelts::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveBelts::Interrupted()
{

}
