#pragma once

#include "Tpp_Rect.h"
#include "Tpp_Vector2f.h"

namespace tp {
	class FloatRect : Rect {
	private:

		float width;
		float height;
		Vector2f position;
		Vector2f pivot;

	public:

		FloatRect(float width, float height);

		void setWidth(float newValue);

		void setHeight(float newValue);

		float getWidth();

		float getHeight();

	};
}