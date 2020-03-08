#pragma once

#include <map>

#include <SFML/Graphics.hpp>

namespace tp {

	class Renderer {
	private:
		std::map<int, sf::Drawable> objects;

	public:
		Renderer();

		void repaint(sf::RenderWindow& window);

		// void add_object(int id, sf::Drawable drawable);
	};

}