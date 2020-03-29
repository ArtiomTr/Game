#pragma once

#include "Tpp_Quaternion.h"
#include "Tpp_Vector2.h"

namespace tp {

	class Transform {
	private:
		Quaternion rotation;
		Vector2<float> position;
		Vector2<float> scale;

	public:
		Transform(Vector2<float> position, Quaternion rotation,
				  Vector2<float> scale);
	};

}
