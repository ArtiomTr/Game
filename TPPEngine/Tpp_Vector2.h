#pragma once

namespace tp {
	template <typename T> class Vector2 {
	private:
		T x, y;

	public:
		Vector2(T x, T y) : x(x), y(y) {
		}

		static Vector2<T> zero() {
			return Vector2<T>(0, 0);
		}

		Vector2<T> operator+(Vector2<T> const& second) {
			return Vector2<T>(x + second.x, y + second.y);
		}

		Vector2<T> operator-(Vector2<T> const& second) {
			return Vector2<T>(x - second.x, y - second.y);
		}

		Vector2<T> operator*(Vector2<T> const& second) {
			return Vector2<T>(x * second.x, y * second.y);
		}

		Vector2<T> operator*(T const& second) {
			return Vector2<T>(x * second, y * second);
		}

		Vector2<T> operator/(T const& second) {
			return Vector2<T>(x / second, y / second);
		}
	};

}