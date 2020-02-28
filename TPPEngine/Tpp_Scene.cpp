#include "Tpp_Scene.h"

#include <iostream>

namespace tp {

	Scene::Scene(std::vector<Controller*> c) {
		for (int i = 0; i < c.size(); i++)
			controllers.push_back(c[i]);
	}

	int Scene::getEntityCount(std::string name) {
		if (entities.find(name) != entities.end()) {
			return entities[name].size();
		}
		return -1;
	}

	void Scene::addGameObject(std::vector<Entity*> ents,
							  GameObject* newGameObject) {
		for (int i = 0; i < ents.size(); i++) {
			ents[i]->gameObject = newGameObject;
			if (entities.find(ents[i]->getName()) != entities.end()) {
				entities[ents[i]->getName()].push_back(ents[i]);
			} else {
				std::vector<Entity*> newEntityVector;
				newEntityVector.push_back(ents[i]);
				entities.insert(
					std::make_pair(ents[i]->getName(), newEntityVector));
			}
			newGameObject->addNewEntity(entities[ents[i]->getName()].size() -
										1);
		}
		gameObjects.push_back(newGameObject);
	}

	void Scene::ECS_update() {
		for (int i = 0; i < controllers.size(); i++) {
			if (entities.find(controllers[i]->getName()) != entities.end())
				controllers[i]->onDeepUpdate(
					entities[controllers[i]->getName()]);
		}
	}

}