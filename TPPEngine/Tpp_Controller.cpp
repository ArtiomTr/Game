#include "Tpp_Controller.h"
#include <iostream>

namespace tp {

	Controller::Controller(std::string name, ControllerType type) : name(name), type(type) {

	}

	void Controller::start(std::vector<Entity*> entities) {

	}

	void Controller::onUpdate(std::vector<Entity*> entities) {

	};

	void Controller::onDeepUpdate(std::vector<Entity*> entities) {

	}

	std::string Controller::getName() {
		return name;
	}

	Controller::ControllerType Controller::getType() {
		return type;
	}

}