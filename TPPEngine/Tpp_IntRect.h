#pragma once

#include "Tpp_Rect.h"
#include "Tpp_Vector2i.h"

namespace tp {
	class IntRect : Rect {
	private:
		int width;
		int height;
		Vector2i position;
		Vector2i pivot;

	public:
		IntRect(int width, int height);

		void setWidth(int w);

		void setHeight(int h);

		int getWidth();

		int getHeight();
	};
}