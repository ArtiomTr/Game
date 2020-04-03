#pragma once

#include "Tpp_Scene.h"

namespace tp {

	class SceneManager {
	private:
		std::vector<Scene*> scenes;

	public:
		SceneManager();

		Scene* currentScene;
		Scene* loadScene(int index);
		void addScene(Scene* scene);
	};

}