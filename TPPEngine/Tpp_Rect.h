#pragma once

#include "Tpp_Vector2.h"

namespace tp {
	class Rect {
	private:
		Vector2 position;
		Vector2 pivot;
	public:
		virtual Vector2 getPosition();
		virtual Vector2 getPivot();
		virtual void setPosition(Vector2 newValue);
		virtual void setPivot(Vector2 newValue);
	};
}