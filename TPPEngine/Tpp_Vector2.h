#pragma once

namespace tp {
	template <typename T> class Vector2 {
	public:
		T x, y;
		Vector2(T x, T y) : x(x), y(y) {
		}

		static Vector2<T> zero() {
			return Vector2<T>(0, 0);
		}

		Vector2<T> invert() {
			return Vector2<T>(-x, -y);
		}

		Vector2<T> operator+(Vector2<T> const& second) {
			return Vector2<T>(x + second.x, y + second.y);
		}

		void operator+=(Vector2<T> const& second) {
			x += second.x;
			y += second.y;
		}

		Vector2<T> operator-(Vector2<T> const& second) {
			return Vector2<T>(x - second.x, y - second.y);
		}

		T Dot(Vector2<T> const& second) {
			return x * second.x + y * second.y;
		}

		Vector2<T> operator*(T const& second) {
			return Vector2<T>(x * second, y * second);
		}

		Vector2<T> operator/(T const& second) {
			return Vector2<T>(x / second, y / second);
		}
	};

}