#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H

#include "FlyBehavior.h"
#include <iostream>

class FlyRocketPowered : public FlyBehavior {
	public:
		void fly() { std::cout << "I'm flying with a rocket!" << std::endl; }
};

#endif