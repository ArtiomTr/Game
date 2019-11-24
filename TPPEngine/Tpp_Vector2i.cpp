#include "Tpp_Vector2i.h"
#include "Tpp_Vector2.h"

namespace tp {
	
	Vector2i::Vector2i(int x, int y) : x(x), y(y) {

	}

	Vector2i Vector2i::zero() {
		return Vector2i(0, 0);
	}

}