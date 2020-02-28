#pragma once

#include "Tpp_EntityController.h"

class Test_Entity : public tp::Entity {
public:
	int rotSpeed;
	int currentRotation;
	Test_Entity(int rotSpeed);
};

class Test_Controller : public tp::EntityController<Test_Entity> {
public:
	Test_Controller();

	void start(std::vector<tp::Entity*> entities);

	void onUpdate(std::vector<tp::Entity*> entities);

	void onDeepUpdate(std::vector<tp::Entity*> entities);
};
