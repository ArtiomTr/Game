#pragma once

namespace tp {
	template <typename T> class Vector2 {
	private:
		T x, y;

	public:
		Vector2(T x, T y);
		static Vector2<T> zero();
		Vector2<T> operator+(Vector2<T> const& second);
		Vector2<T> operator-(Vector2<T> const& second);
		Vector2<T> operator*(Vector2<T> const& second);
		Vector2<T> operator*(T const& second);
		Vector2<T> operator/(T const& second);
	};
}