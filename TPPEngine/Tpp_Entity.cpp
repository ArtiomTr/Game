#include "Tpp_Entity.h"

namespace tp {

	std::string Entity::getName() {
		return name;
	}

	Entity::Entity(std::string name) : name(name) {

	};

}