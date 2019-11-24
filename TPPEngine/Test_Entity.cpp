#include "Test_Entity.h"
#include <iostream>

Test_Entity::Test_Entity(int rotSpeed) :
	rotSpeed(rotSpeed),
	currentRotation(0),
	tp::Entity("test")
{

}


Test_Controller::Test_Controller() : tp::Controller("test", tp::Controller::DEEP) {

}

void Test_Controller::start(std::vector<tp::Entity*> entities) {

}

void Test_Controller::onUpdate(std::vector<tp::Entity*> entities) {

}

void Test_Controller::onDeepUpdate(std::vector<tp::Entity*> entities) {
	for (int i = 0; i < entities.size(); i++) {
		Test_Entity* entity = (Test_Entity*)entities[i];
		entity->currentRotation += entity->rotSpeed;
		//entities[i]->currentRotation += entities[i]->rotSpeed;
	}
}