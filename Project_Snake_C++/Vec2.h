#pragma once

template <typename T>
struct Vec2 {
	T x; 
	T y; 
	
	Vec2<T> operator+ (Vec2<T> b) {
		Vec2<T> c; 
		c.x = x + b.x;
		c.y = y + b.y;
			return c;
	}
	Vec2<T> operator- (Vec2<T> b) {
		Vec2<T> c; 
		c.x = x - b.x;
		c.y = y - b.y;
			return c;
	}
	Vec2<T> operator* (float k) {
		Vec2<T> c; 
		c.x = x * k;
		c.y = y * k;
			return c;
	}
	bool operator== (Vec2<T> b) {
		if (x == b.x && y == b.y) {
			return true;
		}
		else {
			return false;
		}
			
	}
};

using Vec2i = Vec2<int>; //Alias for using the class in a shorter syntax.