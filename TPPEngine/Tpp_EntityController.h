#pragma once

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

#include "Tpp_GameObject.h"
#include "Tpp_Utils.h"

#include "Test_Entity.h"

namespace tp {

	class Entity {
	private:
		std::string name;

	public:
		GameObject* gameObject;
		std::string getName();
		Entity(std::string name);
	};

	template <class T> class EntityController {

		static_assert(std::is_base_of<Entity, T>::value,
					  "T must inherit from Entity");

	public:
		static enum ControllerType { DEEP, SURFACE };

	private:
		std::string name;
		ControllerType type;

	public:
		EntityController(std::string name, ControllerType type);

		virtual void start(std::vector<T*> entities);

		virtual void surfaceUpdate(std::vector<T*> entities);

		virtual void deepUpdate(std::vector<T*> entities);

		std::string getName();

		ControllerType getType();
	};

}