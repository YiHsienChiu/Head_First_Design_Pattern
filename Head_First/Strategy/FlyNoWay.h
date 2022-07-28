#ifndef FLYNOWAY_H
#define FLYNOWAY_H

#include "FlyBehavior.h"
#include <iostream>

class FlyNoWay : public FlyBehavior {
	public:
		void fly() override { std::cout << "I can't fly" << std::endl; }
};

#endif