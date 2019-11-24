#pragma once

#include "Tpp_Quaternion.h"
#include "Tpp_Vector2f.h"

namespace tp {

	class Transform {
	private:
		Quaternion rotation;
		Vector2f position;
		Vector2f scale;
	public:
		Transform(Vector2f position, Quaternion rotation, Vector2f scale);
	};

}
