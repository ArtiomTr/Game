#include "Tpp_Rect.h"

namespace tp {

	Vector2 Rect::getPosition() { return position; }
	Vector2 Rect::getPivot() { return pivot; }
	void Rect::setPosition(Vector2 newValue) { position = newValue; }
	void Rect::setPivot(Vector2 newValue) { pivot = newValue; }

}