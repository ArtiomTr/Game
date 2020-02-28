#include "Tpp_Game.h"

#include <iostream>

#include <SFML/Graphics.hpp>

#include "Tpp_Math.h"

namespace tp {

	Game::Game(tp::GameConfiguration _configuration) {
		configuration = _configuration;
		window.create(sf::VideoMode(configuration.getWindowSize().getWidth(),
									configuration.getWindowSize().getHeight()),
					  configuration.getGameTitle());
	}

	Scene* Game::getScene() { return currentScene; }

	void Game::Invoke() {

		while (window.isOpen()) {
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed) {
					window.close();
				}
			}
			if (currentScene != NULL) {
				currentScene->ECS_update();
			}
		}
	}

	void Game::openScene(Scene* scene) { currentScene = scene; }

	GameConfiguration::GameConfiguration()
		: windowSize(IntRect(0, 0)), gameTitle("") {}

	GameConfiguration::GameConfiguration(IntRect windowSize,
										 std::string gameTitle)
		: windowSize(windowSize), gameTitle(gameTitle) {}

	IntRect GameConfiguration::getWindowSize() { return windowSize; }

	std::string GameConfiguration::getGameTitle() { return gameTitle; }

};