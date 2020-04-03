#pragma once

#include "Tpp_EntityController.h"

using namespace tp;

class Test_Entity : public Entity {
public:
	float rotSpeed;
	Test_Entity(float rotSpeed);
};

class Test_Controller : public EntityController<Test_Entity> {
public:
	Test_Controller();

	void start(std::vector<Entity*> entities) override;

	void surfaceUpdate(std::vector<Entity*> entities) override;

	void deepUpdate(std::vector<Entity*> entities) override;
};
