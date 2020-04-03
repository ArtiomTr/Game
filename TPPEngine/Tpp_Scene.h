#pragma once

#include <map>
#include <vector>

#include "Tpp_EntityController.h"
#include "Tpp_GameObject.h"

namespace tp {

	class Scene {
	private:
		std::vector<GameObject*> gameObjects;
		std::vector<IEntityController*> controllers;
		std::map<std::string, std::vector<Entity*>> entities;

	public:
		Scene(std::vector<IEntityController*> controllers);

		void ECS_update();

		void addGameObject(std::vector<Entity*> enitities,
						   GameObject* newGameObject);

		int getEntityCount(std::string name);

		std::vector<Entity*> getEntitiesByName(std::string name);
	};

}