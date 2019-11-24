#pragma once

#include "Tpp_Vector2.h"

namespace tp {
	class Vector2i : Vector2 {
	private:
		int x, y;
	public:
		Vector2i(int x, int y);
		static Vector2i zero();
	};
}