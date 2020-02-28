#include "Tpp_EntityController.h"

namespace tp {

	template <typename T>
	EntityController<T>::EntityController(std::string name, ControllerType type)
		: name(name), type(type) {}

	void EntityController::start(std::vector<Entity*> entities) {}

	void Controller::onUpdate(std::vector<Entity*> entities){

	};

	void Controller::onDeepUpdate(std::vector<Entity*> entities) {}

	std::string Controller::getName() { return name; }

	Controller::ControllerType Controller::getType() { return type; }

}