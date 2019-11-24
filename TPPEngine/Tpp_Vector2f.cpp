#include "Tpp_Vector2f.h"

namespace tp {

	Vector2f::Vector2f(float x, float y) : x(x), y(y) {

	}
	Vector2f Vector2f::zero() {
		return Vector2f(0, 0);
	}

}