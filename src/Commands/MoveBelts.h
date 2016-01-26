#ifndef MoveBelts_H
#define MoveBelts_H

#include "../CommandBase.h"
#include "WPILib.h"

class MoveBelts: public CommandBase
{
public:
	MoveBelts();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
