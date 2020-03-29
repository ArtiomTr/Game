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
		Rect(T width, T height)
			: width(width), height(height), position(Vector2<T>::zero()),
			  pivot(Vector2<T>(width / (T) 2, height / (T) 2)) {
		}
		Rect(T width, T height, Vector2<T> position)
			: width(width), height(height), position(position),
			  pivot(Vector2<T>(width / (T) 2, height / (T) 2)) {
		}
		Rect(T width, T height, Vector2<T> position, Vector2<T> privot)
			: width(width), height(height), position(position), pivot(pivot) {
		}
		virtual Vector2<T> getPosition() {
			return position;
		}
		virtual Vector2<T> getPivot() {
			return pivot;
		}
		virtual void setPosition(Vector2<T> newPosition) {
			position = newPosition;
		}
		virtual void setPivot(Vector2<T> newPivot) {
			pivot = newPivot;
		}
		virtual void setWidth(T newWidth) {
			width = newWidth;
		}
		virtual void setHeight(T newHeight) {
			height = newHeight;
		}
		virtual T getWidth() {
			return width;
		}
		virtual T getHeight() {
			return height;
		}
	};

}