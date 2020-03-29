#include "Tpp_Transform.h"

namespace tp {

	Transform::Transform(Vector2<float> position, Quaternion rotation,
						 Vector2<float> scale)
		: position(position), rotation(rotation), scale(scale) {
	}

}