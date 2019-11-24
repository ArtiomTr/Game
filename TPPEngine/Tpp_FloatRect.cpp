#include "Tpp_FloatRect.h"

namespace tp {

	FloatRect::FloatRect(float width, float height) : 
		width(width), 
		height(height), 
		position(Vector2f::zero()),
		pivot(Vector2f(width / 2.f, height / 2.f))
	{

	}

	void FloatRect::setWidth(float newValue) {
		width = newValue;
	}

	void FloatRect::setHeight(float newValue) {
		height = newValue;
	}

	float FloatRect::getWidth() {
		return width;
	}

	float FloatRect::getHeight() {
		return height;
	}
}