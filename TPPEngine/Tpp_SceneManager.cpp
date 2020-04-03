#include "Tpp_SceneManager.h"

namespace tp {

	SceneManager::SceneManager() : scenes(std::vector<Scene*>()) {
	}

	Scene* SceneManager::loadScene(int sceneIndex) {
		if (sceneIndex >= 0 && sceneIndex < scenes.size()) {
			currentScene = scenes[sceneIndex];
			return currentScene;
		} else {
			throw "Scene index do not exist";
		}
	}

	void SceneManager::addScene(Scene* scene) {
		scenes.push_back(scene);
	}

}