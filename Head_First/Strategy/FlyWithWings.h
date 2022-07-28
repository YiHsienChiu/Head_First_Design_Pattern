#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H

#include "FlyBehavior.h"
#include <iostream>

class FlyWithWings : public FlyBehavior{
public:
	void fly() override { std::cout << "I'm flying!!" << std::endl; }
};

#endif