#pragma once

#include "Tpp_EntityController.h"

using namespace tp;

class Test_Entity : public Entity {
public:
	int rotSpeed;
	int currentRotation;
	Test_Entity(int rotSpeed);
};

class Test_Controller : public EntityController<Test_Entity> {
public:
	Test_Controller();

	void start(std::vector<Entity*> entities) override;

	void surfaceUpdate(std::vector<Entity*> entities) override;

	void deepUpdate(std::vector<Entity*> entities) override;
};
