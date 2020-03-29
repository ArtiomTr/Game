#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include "Tpp_Rect.h"
#include "Tpp_Scene.h"

namespace tp {

	struct GameConfiguration {

	private:
		Rect<int> windowSize;
		std::string gameTitle;

	public:
		GameConfiguration(Rect<int> size, std::string name);
		GameConfiguration();

		Rect<int> getWindowSize();
		std::string getGameTitle();
	};

	class Game {
	private:
		GameConfiguration configuration;
		sf::RenderWindow window;
		sf::Event event;
		Scene* currentScene;

	public:
		Game(GameConfiguration _configuration);

		void Invoke();

		void openScene(Scene* scene);

		Scene* getScene();
	};

}