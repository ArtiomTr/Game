#include "Tpp_Debuggable.h"

namespace tp {

	Debuggable::Debuggable() : Entity("debuggable") {
	}

	void Debuggable::draw(sf::RenderTarget* target, sf::RenderStates states) {
	}

	DebugRect::DebugRect(Rect<float> rect, sf::Color color) {
		shape =
			sf::RectangleShape(sf::Vector2f(rect.getWidth(), rect.getHeight()));
		shape.setOrigin(
			sf::Vector2f(rect.getPosition().x, rect.getPosition().y));
		shape.setOutlineColor(color);
		shape.setOutlineThickness(5);
		shape.setFillColor(sf::Color::Transparent);
	}

	void DebugRect::draw(sf::RenderTarget* target, sf::RenderStates states) {
		Vector2<float> pos = gameObject->transform.position;
		shape.setPosition(sf::Vector2f(pos.x, pos.y));
		shape.setRotation(gameObject->transform.rotation.y);
		target->draw(shape, states);
	}

}