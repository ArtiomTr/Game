#include "Tpp_IntRect.h"

namespace tp {

	IntRect::IntRect(int width, int height) : 
		width(width),
		height(height),
		position(Vector2i::zero()),
		pivot(Vector2i(width / 2, height / 2))
	{

	}

	void IntRect::setWidth(int w) {
		width = w;
	}

	void IntRect::setHeight(int h) {
		height = h;
	}

	int IntRect::getWidth() {
		return width;
	}

	int IntRect::getHeight() {
		return height;
	}

}