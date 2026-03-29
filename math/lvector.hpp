#pragma once

#ifndef LMATH_PRECISION
#define LMATH_PRECISION float
#endif

struct Vec2 {
	union {
		struct { LMATH_PRECISION x, y; };
		LMATH_PRECISION arr[2];
	};
	inline Vec2& operator+=(const Vec2& r);
	inline Vec2& operator-=(const Vec2& r);
	inline Vec2& operator*=(const Vec2& r);
	inline Vec2& operator/=(const Vec2& r);
	inline Vec2 operator-() const;
};

struct Vec3 {
	union {
		struct { LMATH_PRECISION x, y, z; };
		LMATH_PRECISION arr[3];
	};
	inline Vec3& operator+=(const Vec3& r);
	inline Vec3& operator-=(const Vec3& r);
	inline Vec3& operator*=(const Vec3& r);
	inline Vec3& operator/=(const Vec3& r);
	inline Vec3 operator-() const;
};

struct Vec4 {
	union {
		struct { LMATH_PRECISION x, y, z, w; };
		LMATH_PRECISION arr[4];
	};
	inline Vec4& operator+=(const Vec4& r);
	inline Vec4& operator-=(const Vec4& r);
	inline Vec4& operator*=(const Vec4& r);
	inline Vec4& operator/=(const Vec4& r);
	inline Vec4 operator-() const;
};

inline Vec2 operator+(const Vec2& v1, const Vec2& v2);

inline Vec3 operator+(const Vec3& v1, const Vec3& v2);

inline Vec4 operator+(const Vec4& v1, const Vec4& v2);

inline Vec4 operator-(const Vec4& v1, const Vec4& v2);

inline Vec2 operator-(const Vec2& v1, const Vec2& v2);

inline Vec3 operator-(const Vec3& v1, const Vec3& v2);

inline Vec2 operator*(const Vec2& v1, const Vec2& v2);

inline Vec3 operator*(const Vec3& v1, const Vec3& v2);

inline Vec4 operator*(const Vec4& v1, const Vec4& v2);

inline Vec2 operator/(const Vec2& v1, const Vec2& v2);

inline Vec3 operator/(const Vec3& v1, const Vec3& v2);

inline Vec4 operator/(const Vec4& v1, const Vec4& v2);

inline Vec2 operator*(const LMATH_PRECISION l, const Vec2& v);
inline Vec3 operator*(const LMATH_PRECISION l, const Vec3& v);
inline Vec4 operator*(const LMATH_PRECISION l, const Vec4& v);

inline Vec2 operator*(const Vec2& v, const LMATH_PRECISION l);
inline Vec3 operator*(const Vec3& v, const LMATH_PRECISION l);
inline Vec4 operator*(const Vec4& v, const LMATH_PRECISION l);

inline LMATH_PRECISION dot(const Vec2& v1, const Vec2& v2);

inline LMATH_PRECISION dot(const Vec3& v1, const Vec3& v2);

inline LMATH_PRECISION dot(const Vec4& v1, const Vec4& v2);

inline LMATH_PRECISION cross(const Vec2& v1, const Vec2& v2);

inline Vec3 cross(const Vec3& v1, const Vec3& v2);

inline LMATH_PRECISION length(const Vec2& v);

inline LMATH_PRECISION length(const Vec3& v);

inline LMATH_PRECISION length(const Vec4& v);

inline LMATH_PRECISION angle(const Vec2& v1, const Vec2& v2);

inline LMATH_PRECISION angle(const Vec3& v1, const Vec3& v2);

inline LMATH_PRECISION angle(const Vec4& v1, const Vec4& v2);
#include "lvector.inl" 