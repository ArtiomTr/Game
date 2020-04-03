#include "Test_Entity.h"

Test_Entity::Test_Entity(float rotSpeed)
	: rotSpeed(rotSpeed), tp::Entity("test") {
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
		entity->gameObject->transform.rotation.y += entity->rotSpeed;
		// entities[i]->currentRotation += entities[i]->rotSpeed;
	}
}