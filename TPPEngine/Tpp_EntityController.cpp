#include "Tpp_EntityController.h"

namespace tp {

	Entity::Entity(std::string name) : name(name){};

	std::string Entity::getName() {
		return name;
	}

}