#ifndef MUTEQUACK_H
#define MUTEQUACK_H

#include "QuackBehavior.h"
#include <iostream>

class MuteQuack : public QuackBehavior {
	public:
		void quack() override { std::cout << "<< Silence >>" << std::endl; }
};

#endif