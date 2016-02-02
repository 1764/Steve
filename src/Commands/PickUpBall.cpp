#include "PickUpBall.h"
PickUpBall::PickUpBall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(spindle);
}

// Called just before this Command runs the first time
void PickUpBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void PickUpBall::Execute()
{
	spindle->setSpeed(1);
}

// Make this return true when this Command no longer needs to run execute()
bool PickUpBall::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PickUpBall::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickUpBall::Interrupted()
{

}
