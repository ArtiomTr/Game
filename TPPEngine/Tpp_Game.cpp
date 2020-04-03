#include "Tpp_Game.h"

namespace tp {

	Game::Game(GameConfiguration _configuration)
		: configuration(_configuration), sceneManager(new SceneManager()) {
		window.create(sf::VideoMode(configuration.getWindowSize().getWidth(),
									configuration.getWindowSize().getHeight()),
					  configuration.getGameTitle());
	}

	SceneManager* Game::getSceneManager() {
		return sceneManager;
	}

	void Game::Invoke() {
		while (window.isOpen()) {
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed) {
					window.close();
				}
			}
			if (sceneManager->currentScene != NULL) {
				sceneManager->currentScene->ECS_update();
			}
			window.display();
		}
	}

	GameConfiguration Game::getConfiguration() {
		return configuration;
	}

	sf::RenderWindow* Game::getRenderWindow() {
		return std::addressof(window);
	}

	bool GameConfiguration::isDebug() {
		return debugMode;
	}

	GameConfiguration::GameConfiguration(Rect<int> windowSize,
										 std::string gameTitle, bool debugMode)
		: windowSize(windowSize), gameTitle(gameTitle), debugMode(debugMode) {
	}

	Rect<int> GameConfiguration::getWindowSize() {
		return windowSize;
	}

	std::string GameConfiguration::getGameTitle() {
		return gameTitle;
	}

};