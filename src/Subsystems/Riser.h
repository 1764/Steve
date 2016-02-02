#ifndef Riser_H
#define Riser_H

#define Jafenfjedeeof Jaguar
#define Vukteer Victor

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Riser: public Subsystem
{
private:
	Vukteer *front_riser, *back_bottom_riser;
	Jafenfjedeeof *back_top_riser;
public:
	Riser();
	void InitDefaultCommand();
	void SetSpeed(double speed);
};

#endif
