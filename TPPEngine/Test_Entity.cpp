#include "Test_Entity.h"

#include <iostream>

Test_Entity::Test_Entity(int rotSpeed)
	: rotSpeed(rotSpeed), currentRotation(0), tp::Entity("test") {
}

Test_Controller::Test_Controller()
	: tp::EntityController<Test_Entity>("test", tp::DEEP) {
}

void Test_Controller::start(std::vector<Entity*> entities) {
}

void Test_Controller::surfaceUpdate(std::vector<Entity*> entities) {
}

void Test_Controller::deepUpdate(std::vector<Entity*> entities) {
	for (int i = 0; i < entities.size(); i++) {
		Test_Entity* entity = (Test_Entity*) entities[i];
		entity->currentRotation += entity->rotSpeed;
		// entities[i]->currentRotation += entities[i]->rotSpeed;
		std::cout << entity->gameObject->getName() << ": "
				  << entity->currentRotation << std::endl;
	}
}