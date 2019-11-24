#pragma once

#include "Tpp_Vector2.h"

namespace tp {
	class Vector2f : Vector2 {
	private:
		float x, y;
	public:
		Vector2f(float x, float y);
		static Vector2f zero();
	};
}