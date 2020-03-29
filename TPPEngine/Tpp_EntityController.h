#pragma once

#include <string>
#include <vector>

#include <SFML/Graphics.hpp>

#include "Tpp_GameObject.h"
#include "Tpp_Utils.h"

namespace tp {

	enum ControllerType { DEEP, SURFACE };

	class Entity {
	public:
		GameObject* gameObject;

	private:
		std::string name;

	public:
		Entity(std::string name);
		std::string getName();
	};

	class IEntityController {
	public:
		virtual void start(std::vector<Entity*> entities) = 0;

		virtual void surfaceUpdate(std::vector<Entity*> entities) = 0;

		virtual void deepUpdate(std::vector<Entity*> entities) = 0;

		virtual std::string getName() = 0;

		virtual ControllerType getType() = 0;
	};

	template <class T> class EntityController : public IEntityController {

		static_assert(std::is_base_of<Entity, T>::value,
					  "T must inherit from Entity");

	private:
		std::string name;
		ControllerType type;

	public:
		EntityController(std::string name, ControllerType type)
			: name(name), type(type) {
		}

		std::string getName() override {
			return name;
		}

		ControllerType getType() override {
			return type;
		}
	};

}