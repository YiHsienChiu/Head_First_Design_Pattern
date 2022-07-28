#include "Duck.h"
#include "MallardDuck.h"
#include "ModelDuck.h"

#include "FlyRocketPowered.h"

#include <memory>

int main(){
	std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
	mallard->performQuack();
	mallard->performFly();
	
	std::unique_ptr<Duck> model = std::make_unique<ModelDuck>();
	model->performFly();
	model->setflyBehavior(std::make_unique<FlyRocketPowered>());
	model->performFly();
	
	system("pause");
	return 0;
}