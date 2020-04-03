#pragma once
#include "Tpp_EntityController.h"
#include "Tpp_Rect.h"

namespace tp {

	class Debuggable : public Entity {
	public:
		Debuggable();
		virtual void draw(sf::RenderTarget* target, sf::RenderStates states);
	};

	class DebugRect : public Debuggable {
	private:
		sf::RectangleShape shape;
		sf::Color color;

	public:
		DebugRect(Rect<float> rect, sf::Color color = sf::Color::Red);
		void draw(sf::RenderTarget* target, sf::RenderStates states) override;
	};

	class Debug {};

}