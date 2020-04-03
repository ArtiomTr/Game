#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include "Tpp_Rect.h"
#include "Tpp_Scene.h"
#include "Tpp_SceneManager.h"

namespace tp {

	struct GameConfiguration {

	private:
		Rect<int> windowSize;
		std::string gameTitle;
		bool debugMode;

	public:
		GameConfiguration(Rect<int> size, std::string name, bool debugMode);

		Rect<int> getWindowSize();
		std::string getGameTitle();
		bool isDebug();
	};

	class Game {
	private:
		GameConfiguration configuration;
		sf::RenderWindow window;
		sf::Event event;
		SceneManager* sceneManager;

	public:
		Game(GameConfiguration _configuration);

		void Invoke();

		sf::RenderWindow* getRenderWindow();

		Scene* getScene();

		GameConfiguration getConfiguration();

		SceneManager* getSceneManager();
	};

}