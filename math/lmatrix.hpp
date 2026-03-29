#pragma once
#include "lvector.hpp"

#ifndef LMATH_PRECISION
#define LMATH_PRECISION float
#endif

struct Mat2 {
	union {
		struct {
			LMATH_PRECISION
				_11, _12,
				_21, _22;
		};
		LMATH_PRECISION arr[4];
		Vec2 vec[2];
	};
};

struct Mat3 {
	union {
		struct {
			LMATH_PRECISION
				_11, _12, _13,
				_21, _22, _23,
				_31, _32, _33;
		};
		LMATH_PRECISION arr[9];
		Vec3 vec[3];
	};
};

struct Mat4 {
	union {
		struct {
			LMATH_PRECISION
				_11, _12, _13, _14,
				_21, _22, _23, _24,
				_31, _32, _33, _34,
				_41, _42, _43, _44;
		};
		LMATH_PRECISION arr[16];
		Vec4 vec[4];
	};
};

inline Mat2 operator+(const Mat2& l, const Mat2& r);

inline Mat3 operator+(const Mat3& l, const Mat3& r);

inline Mat4 operator+(const Mat4& l, const Mat4& r);

inline Mat2 operator-(const Mat2& l, const Mat2& r);

inline Mat3 operator-(const Mat3& l, const Mat3& r);

inline Mat4 operator-(const Mat4& l, const Mat4& r);

inline Mat2 operator*(const Mat2& l, const Mat2& r);

inline Mat3 operator*(const Mat3& l, const Mat3& r);

inline Mat4 operator*(const Mat4& l, const Mat4& r);

inline LMATH_PRECISION MatDeterminant(const Mat2& m);

inline LMATH_PRECISION MatDeterminant(const Mat3& m);

inline LMATH_PRECISION MatDeterminant(const Mat4& m);
	   
inline Mat2 MatInverse(const Mat2& m);

inline Mat3 MatInverse(const Mat3& m);

inline Mat4 MatInverse(const Mat4& m);
#include "lmatrix.inl"