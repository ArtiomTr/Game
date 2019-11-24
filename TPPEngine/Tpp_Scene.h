#pragma once

#include <vector>
#include <map>
#include "Tpp_GameObject.h"
#include "Tpp_Controller.h"
#include "Tpp_Vector2i.h"

namespace tp {

	class Scene {
	private:
		std::vector<GameObject*> gameObjects;
		std::map<Vector2i, GameObject*> gameObjectsGrid;
		std::vector<Controller*> controllers;
		std::map<std::string, std::vector<Entity*>> entities;
		int gridSize;
	public:
		Scene(std::vector<Controller*> controllers);

		void ECS_update();

		void addGameObject(std::vector<Entity*> ents, GameObject* newGameObject);
		
		int getEntityCount(std::string name);
	};

}