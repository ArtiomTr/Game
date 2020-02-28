#pragma once

#include <string>

#include <SFML/Graphics.hpp>

#include "Tpp_IntRect.h"
#include "Tpp_Math.h"
#include "Tpp_Scene.h"

namespace tp {

	struct GameConfiguration {

	private:
		IntRect windowSize;
		std::string gameTitle;

	public:
		GameConfiguration(IntRect size, std::string name);
		GameConfiguration();

		IntRect getWindowSize();
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