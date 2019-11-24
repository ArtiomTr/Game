#pragma once

#include <string>
#include "Tpp_Entity.h"
#include <vector>

namespace tp {

	class Controller {
		
	public:
		
		static enum ControllerType {
			DEEP, CLEAR
		};

	private:

		std::string name;
		ControllerType type;
	
	public:

		Controller(std::string name, ControllerType type);

		virtual void start(std::vector<Entity*> entities);

		virtual void onUpdate(std::vector<Entity*> entities);

		virtual void onDeepUpdate(std::vector<Entity*> entities);

		std::string getName();

		ControllerType getType();

	};

}