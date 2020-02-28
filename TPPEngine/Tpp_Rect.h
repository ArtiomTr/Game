#pragma once

#include "Tpp_Vector2.h"

namespace tp {

	template <typename T> class Rect {
	private:
		T width;
		T height;
		Vector2<T> position;
		Vector2<T> pivot;

	public:
		virtual Vector2<T> getPosition();
		virtual Vector2<T> getPivot();
		virtual void setPosition(Vector2<T> newValue);
		virtual void setPivot(Vector2<T> newValue);
		virtual void setWidth(T width);
		virtual void setHeight(T height);
		virtual T getWidth();
		virtual T getHeight();
	};
}