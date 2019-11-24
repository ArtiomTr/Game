#pragma once

#include <string>
#include "Tpp_GameObject.h"

namespace tp {

	class Entity {
	private:
		std::string name;
	public:
		GameObject *gameObject;
		std::string getName();
		Entity(std::string name);
	};

}