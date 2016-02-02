#ifndef PickUpBall_H
#define PickUpBall_H

#include "../CommandBase.h"
#include "WPILib.h"

class PickUpBall: public CommandBase
{
public:
	PickUpBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
