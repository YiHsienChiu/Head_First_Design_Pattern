#ifndef DUCK_H
#define DUCK_H


#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <iostream>
#include <memory>

class Duck{
public:
	virtual ~Duck() = default;
	virtual void display() const = 0;
	void performFly() const { flyBehavior->fly(); }
	void performQuack() const { quackBehavior->quack(); }
	void swim() const { std::cout << "All ducks float, even decoys!" << std::endl; }	
	
	void setquackBehavior(std::unique_ptr<QuackBehavior> QB) { quackBehavior = std::move(QB); }
	void setflyBehavior(std::unique_ptr<FlyBehavior> FB) { flyBehavior = std::move(FB); }
	
protected:
	std::unique_ptr<FlyBehavior> flyBehavior = nullptr;
	std::unique_ptr<QuackBehavior> quackBehavior = nullptr;
};

#endif