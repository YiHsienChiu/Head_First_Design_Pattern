#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <iostream>
#include <memory>

class MallardDuck : public Duck {
	public:
		MallardDuck();
		void display() const override { std::cout << "I'm a real Mallard Duck" << std::endl; }
};

inline
MallardDuck::MallardDuck() {
	quackBehavior = std::make_unique<Quack>(); 
	flyBehavior = std::make_unique<FlyWithWings>();
}

#endif