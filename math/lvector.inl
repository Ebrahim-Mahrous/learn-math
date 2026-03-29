#include "lvector.hpp"
#include <cmath>

inline Vec2& Vec2::operator+=(const Vec2& r)
{
	this->x += r.x;
	this->y += r.y;
	return *this;
}

inline Vec2& Vec2::operator-=(const Vec2& r)
{
	this->x -= r.x;
	this->y -= r.y;
	return *this;
}

inline Vec2& Vec2::operator*=(const Vec2& r)
{
	this->x *= r.x;
	this->y *= r.y;
	return *this;
}

inline Vec2& Vec2::operator/=(const Vec2& r)
{
	this->x /= r.x;
	this->y /= r.y;
	return *this;
}

inline Vec2 Vec2::operator-() const
{
	return {-x, -y};
}

inline Vec3& Vec3::operator+=(const Vec3& r)
{
	this->x += r.x;
	this->y += r.y;
	this->z += r.z;
	return *this;
}

inline Vec3& Vec3::operator-=(const Vec3& r)
{
	this->x -= r.x;
	this->y -= r.y;
	this->z -= r.z;
	return *this;
}

inline Vec3& Vec3::operator*=(const Vec3& r)
{
	this->x *= r.x;
	this->y *= r.y;
	this->z *= r.z;
	return *this;
}

inline Vec3& Vec3::operator/=(const Vec3& r)
{
	this->x /= r.x;
	this->y /= r.y;
	this->z /= r.z;
	return *this;
}

inline Vec3 Vec3::operator-() const
{
	return {-x, -y, -z};
}

inline Vec4& Vec4::operator+=(const Vec4& r)
{
	this->x += r.x;
	this->y += r.y;
	this->z += r.z;
	this->w += r.w;
	return *this;
}

inline Vec4& Vec4::operator-=(const Vec4& r)
{
	this->x -= r.x;
	this->y -= r.y;
	this->z -= r.z;
	this->w -= r.w;
	return *this;
}

inline Vec4& Vec4::operator*=(const Vec4& r)
{
	this->x *= r.x;
	this->y *= r.y;
	this->z *= r.z;
	this->w *= r.w;
	return *this;
}

inline Vec4& Vec4::operator/=(const Vec4& r)
{
	this->x /= r.x;
	this->y /= r.y;
	this->z /= r.z;
	this->w /= r.w;
	return *this;
}

inline Vec4 Vec4::operator-() const
{
	return {-x, -y, -z, -w};
}

inline Vec2 operator+(const Vec2& v1, const Vec2& v2)
{
	return { v1.x + v2.x, v1.y + v2.y };
}

inline Vec3 operator+(const Vec3& v1, const Vec3& v2)
{
	return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z };
}

inline Vec4 operator+(const Vec4& v1, const Vec4& v2)
{
	return { v1.x + v2.x, v1.y + v2.y, v1.z + v2.z, v1.w + v2.w };
}

inline Vec4 operator-(const Vec4& v1, const Vec4& v2)
{
	return { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w };
}

inline Vec2 operator-(const Vec2& v1, const Vec2& v2)
{
	return { v1.x - v2.x, v1.y - v2.y };
}

inline Vec3 operator-(const Vec3& v1, const Vec3& v2)
{
	return { v1.x - v2.x, v1.y - v2.y, v1.z - v2.z };
}

inline Vec2 operator*(const Vec2& v1, const Vec2& v2)
{
	return { v1.x * v2.x, v1.y * v2.y };
}

inline Vec3 operator*(const Vec3& v1, const Vec3& v2)
{
	return { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z };
}

inline Vec4 operator*(const Vec4& v1, const Vec4& v2)
{
	return { v1.x * v2.x, v1.y * v2.y, v1.z * v2.z, v1.w * v2.w };
}
inline Vec2 operator/(const Vec2& v1, const Vec2& v2)
{
	return { v1.x / v2.x, v1.y / v2.y };
}

inline Vec3 operator/(const Vec3& v1, const Vec3& v2)
{
	return { v1.x / v2.x, v1.y / v2.y, v1.z / v2.z };
}

inline Vec4 operator/(const Vec4& v1, const Vec4& v2)
{
	return { v1.x / v2.x, v1.y / v2.y, v1.z / v2.z, v1.w / v2.w };
}

inline Vec2 operator*(const LMATH_PRECISION l, const Vec2& v)
{
	return {v.x * l, v.y * l};
}

inline Vec3 operator*(const LMATH_PRECISION l, const Vec3& v)
{
	return {v.x * l, v.y * l, v.z * l};
}

inline Vec4 operator*(const LMATH_PRECISION l, const Vec4& v)
{
	return {v.x * l, v.y * l, v.z * l, v.w * l};
}

inline Vec2 operator*(const Vec2& v, const LMATH_PRECISION l)
{
	return {v.x * l, v.y * l};
}

inline Vec3 operator*(const Vec3& v, const LMATH_PRECISION l)
{
	return {v.x * l, v.y * l, v.z * l};
}

inline Vec4 operator*(const Vec4& v, const LMATH_PRECISION l)
{
	return {v.x * l, v.y *l, v.z * l, v.w * l};
}

inline LMATH_PRECISION dot(const Vec2& v1, const Vec2& v2)
{
	return v1.x * v2.x + v1.y * v2.y;
}

inline LMATH_PRECISION dot(const Vec3& v1, const Vec3& v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

inline LMATH_PRECISION dot(const Vec4& v1, const Vec4& v2)
{
	return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w;
}

inline LMATH_PRECISION cross(const Vec2& v1, const Vec2& v2)
{
	return v1.x * v2.y - v1.y * v2.x;
}

inline Vec3 cross(const Vec3& v1, const Vec3& v2)
{
	return { v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x };
}

inline LMATH_PRECISION length(const Vec2& v)
{
	return hypot(v.x, v.y);
}

inline LMATH_PRECISION length(const Vec3& v)
{
	return sqrt(dot(v, v));
}

inline LMATH_PRECISION length(const Vec4& v)
{
	return sqrt(dot(v, v));
}

inline LMATH_PRECISION angle(const Vec2& v1, const Vec2& v2)
{
	return dot(v1, v2) / (length(v1) * length(v2));
}

inline LMATH_PRECISION angle(const Vec3& v1, const Vec3& v2)
{
	return dot(v1, v2) / (length(v1) * length(v2));
}

inline LMATH_PRECISION angle(const Vec4& v1, const Vec4& v2)
{
	return dot(v1, v2) / (length(v1) * length(v2));
}

inline LMATH_PRECISION aangle(const Vec2& v1, const Vec2& v2)
{
	return acos(dot(v1, v2) / (length(v1) * length(v2)));
}

inline LMATH_PRECISION aangle(const Vec3& v1, const Vec3& v2)
{
	return acos(dot(v1, v2) / (length(v1) * length(v2)));
}

inline LMATH_PRECISION aangle(const Vec4& v1, const Vec4& v2)
{
	return acos(dot(v1, v2) / (length(v1) * length(v2)));
}