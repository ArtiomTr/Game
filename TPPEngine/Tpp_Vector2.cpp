#include "Tpp_Vector2.h"

namespace tp {

	template <typename T> Vector2<T>::Vector2(T x, T y) : x(x), y(y) {}

	template <typename T>
	Vector2<T> Vector2<T>::operator+(Vector2<T> const& second) {
		return Vector2<T>(x + second.x, y + second.y);
	}

	template <typename T>
	Vector2<T> Vector2<T>::operator-(Vector2<T> const& second) {
		return Vector2<T>(x - second.x, y - second.y);
	}

	template <typename T> Vector2<T> Vector2<T>::operator/(T const& second) {
		return Vector2<T>(x / second, y / second);
	}

	template <typename T>
	Vector2<T> Vector2<T>::operator*(Vector2<T> const& second) {
		return Vector2<T>(x * second.x, y * second.y);
	}

	template <typename T> Vector2<T> Vector2<T>::operator*(T const& second) {
		return Vector2<T>(x * second, y * second);
	}

	template <typename T> Vector2<T> Vector2<T>::zero() {
		return Vector2<T>(0, 0);
	}

}