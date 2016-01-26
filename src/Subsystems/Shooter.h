#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	Talon *lower_shooter, *upper_shooter;
public:
	Shooter();
	void InitDefaultCommand();

	void SetSpeed(double speed);
};

#endif
