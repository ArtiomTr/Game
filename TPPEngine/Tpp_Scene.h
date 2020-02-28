#pragma once

#include <map>
#include <vector>

#include "Tpp_Controller.h"
#include "Tpp_GameObject.h"
#include "Tpp_Vector2i.h"

namespace tp {

	class Scene {
		static int gridSize;

	private:
		std::vector<GameObject*> gameObjects;
		std::map<Vector2i, std::vector<GameObject*>> gameObjectsGrid;
		std::map<int, std::vector<Vector2i>> gameObjectPositions;
		std::vector<Controller*> controllers;
		std::map<std::string, std::vector<Entity*>> entities;

	public:
		Scene(std::vector<Controller*> controllers);

		void ECS_update();

		void addGameObject(std::vector<Entity*> ents,
						   GameObject* newGameObject);

		int getEntityCount(std::string name);
	};

}