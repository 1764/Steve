#ifndef Riser_H
#define Riser_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Riser: public Subsystem
{
private:
	Victor *front_riser, *back_bottom_riser;
	Jaguar *back_top_riser;
public:
	Riser();
	void InitDefaultCommand();
	void SetSpeed(double speed);
};

#endif
