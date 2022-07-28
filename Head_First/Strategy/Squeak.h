#ifndef SQUEAK_H
#define SQUEAK_H

#include "QuackBehavior.h"
#include <iostream>

class Squeak : public QuackBehavior {
	public:
		void quack() override { std::cout << "Squeak" << std::endl; }
};

#endif