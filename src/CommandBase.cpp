#include "CommandBase.h"
#include "Subsystems/DriveTrain.h"
#include "Commands/Scheduler.h"
#include "RobotMap.h"

OI *CommandBase::oi = NULL;
DriveTrain *CommandBase::drive_train = NULL;
Riser *CommandBase::riser = NULL;
Shooter *CommandBase::shooter = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	drive_train = new DriveTrain();
	riser = new Riser();
	shooter = new Shooter();
	oi = new OI();
}
