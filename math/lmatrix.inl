#include "lmatrix.hpp"

inline Mat2 operator+(const Mat2& l, const Mat2& r)
{
	return { l._11 + r._11, l._12 + r._12,
			 l._21 + r._21, l._22 + r._22 };
}

inline Mat3 operator+(const Mat3& l, const Mat3& r)
{
	return { l._11 + r._11, l._12 + r._12, l._13 + r._13,
			 l._21 + r._21, l._22 + r._22, l._23 + r._23,
			 l._31 + r._31, l._32 + r._32, l._33 + r._33 };
}

inline Mat4 operator+(const Mat4& l, const Mat4& r)
{
	return { l._11 + r._11, l._12 + r._12, l._13 + r._13, l._14 + r._14,
			 l._21 + r._21, l._22 + r._22, l._23 + r._23, l._24 + r._24,
			 l._31 + r._31, l._32 + r._32, l._33 + r._33, l._34 + r._34,
			 l._41 + r._41, l._42 + r._42, l._43 + r._43, l._44 + r._44 };
}

inline Mat2 operator-(const Mat2& l, const Mat2& r)
{
	return { l._11 - r._11, l._12 - r._12,
			 l._21 - r._21, l._22 - r._22 };
}

inline Mat3 operator-(const Mat3& l, const Mat3& r)
{
	return { l._11 - r._11, l._12 - r._12, l._13 - r._13,
			 l._21 - r._21, l._22 - r._22, l._23 - r._23,
			 l._31 - r._31, l._32 - r._32, l._33 - r._33 };
}

inline Mat4 operator-(const Mat4& l, const Mat4& r)
{
	return { l._11 - r._11, l._12 - r._12, l._13 - r._13, l._14 - r._14,
			 l._21 - r._21, l._22 - r._22, l._23 - r._23, l._24 - r._24,
			 l._31 - r._31, l._32 - r._32, l._33 - r._33, l._34 - r._34,
			 l._41 - r._41, l._42 - r._42, l._43 - r._43, l._44 - r._44 };
}

Mat2 operator*(const Mat2& l, const Mat2& r)
{
	return {
		l._11 * r._11 + l._12 * r._21,
		l._11 * r._12 + l._12 * r._22,
		l._21 * r._11 + l._22 * r._21,
		l._21 * r._12 + l._22 * r._22,
	};
}

Mat3 operator*(const Mat3& l, const Mat3& r)
{
	return {
		l._11 * r._11 + l._12 * r._21 + l._13 * r._31,
		l._11 * r._12 + l._12 * r._22 + l._13 * r._32,
		l._11 * r._13 + l._12 * r._23 + l._13 * r._33,
		l._21 * r._11 + l._22 * r._21 + l._23 * r._31,
		l._21 * r._12 + l._22 * r._22 + l._23 * r._32,
		l._21 * r._13 + l._22 * r._23 + l._23 * r._33,
		l._31 * r._11 + l._32 * r._21 + l._33 * r._31,
		l._31 * r._12 + l._32 * r._22 + l._33 * r._32,
		l._31 * r._13 + l._32 * r._23 + l._33 * r._33,
	};
}

inline Mat4 operator*(const Mat4& l, const Mat4& r)
{
	return {
		l._11 * r._11 + l._12 * r._21 + l._13 * r._31 + l._14 * r._41,
		l._11 * r._12 + l._12 * r._22 + l._13 * r._32 + l._14 * r._42,
		l._11 * r._13 + l._12 * r._23 + l._13 * r._33 + l._14 * r._43,
		l._11 * r._14 + l._12 * r._24 + l._13 * r._34 + l._14 * r._44,
		l._21 * r._11 + l._22 * r._21 + l._23 * r._31 + l._24 * r._41,
		l._21 * r._12 + l._22 * r._22 + l._23 * r._32 + l._24 * r._42,
		l._21 * r._13 + l._22 * r._23 + l._23 * r._33 + l._24 * r._43,
		l._21 * r._14 + l._22 * r._24 + l._23 * r._34 + l._24 * r._44,
		l._31 * r._11 + l._32 * r._21 + l._33 * r._31 + l._34 * r._41,
		l._31 * r._12 + l._32 * r._22 + l._33 * r._32 + l._34 * r._42,
		l._31 * r._13 + l._32 * r._23 + l._33 * r._33 + l._34 * r._43,
		l._31 * r._14 + l._32 * r._24 + l._33 * r._34 + l._34 * r._44,
		l._41 * r._11 + l._42 * r._21 + l._43 * r._31 + l._44 * r._41,
		l._41 * r._12 + l._42 * r._22 + l._43 * r._32 + l._44 * r._42,
		l._41 * r._13 + l._42 * r._23 + l._43 * r._33 + l._44 * r._43,
		l._41 * r._14 + l._42 * r._24 + l._43 * r._34 + l._44 * r._44,
	};
}

inline LMATH_PRECISION MatDeterminant(const Mat2& m)
{
	return m._11 * m._22 - m._12 * m._21;
}

inline LMATH_PRECISION MatDeterminant(const Mat3& m)
{
	return m._11 * (m._22 * m._33 - m._23 * m._32)
		- m._12 * (m._21 * m._33 - m._23 * m._31)
		+ m._13 * (m._21 * m._32 - m._22 * m._31);
}

inline LMATH_PRECISION MatDeterminant(const Mat4& m)
{
	LMATH_PRECISION c11 = m._22 * (m._33 * m._44 - m._34 * m._43)
		- m._23 * (m._32 * m._44 - m._34 * m._42)
		+ m._24 * (m._32 * m._43 - m._33 * m._42);

	LMATH_PRECISION c12 = m._21 * (m._33 * m._44 - m._34 * m._43)
		- m._23 * (m._31 * m._44 - m._34 * m._41)
		+ m._24 * (m._31 * m._43 - m._33 * m._41);

	LMATH_PRECISION c13 = m._21 * (m._32 * m._44 - m._34 * m._42)
		- m._22 * (m._31 * m._44 - m._34 * m._41)
		+ m._24 * (m._31 * m._42 - m._32 * m._41);

	LMATH_PRECISION c14 = m._21 * (m._32 * m._43 - m._33 * m._42)
		- m._22 * (m._31 * m._43 - m._33 * m._41)
		+ m._23 * (m._31 * m._42 - m._32 * m._41);

	return m._11 * c11 - m._12 * c12 + m._13 * c13 - m._14 * c14;
}

inline Mat2 MatInverse(const Mat2& m)
{
	LMATH_PRECISION invDet = 1.0 / MatDeterminant(m);
	return {
		 m._22 * invDet,
		-m._12 * invDet,
		-m._21 * invDet,
		 m._11 * invDet,
	};
}

inline Mat3 MatInverse(const Mat3& m)
{
	LMATH_PRECISION invDet = 1.0 / MatDeterminant(m);

	return {
		+(m._22 * m._33 - m._23 * m._32) * invDet,
		-(m._12 * m._33 - m._13 * m._32) * invDet,
		+(m._12 * m._23 - m._13 * m._22) * invDet,
		-(m._21 * m._33 - m._23 * m._31) * invDet,
		+(m._11 * m._33 - m._13 * m._31) * invDet,
		-(m._11 * m._23 - m._13 * m._21) * invDet,
		+(m._21 * m._32 - m._22 * m._31) * invDet,
		-(m._11 * m._32 - m._12 * m._31) * invDet,
		+(m._11 * m._22 - m._12 * m._21) * invDet,
	};
}

inline Mat4 MatInverse(const Mat4& m)
{
	LMATH_PRECISION s11 = m._33 * m._44 - m._34 * m._43;
	LMATH_PRECISION s12 = m._32 * m._44 - m._34 * m._42;
	LMATH_PRECISION s13 = m._32 * m._43 - m._33 * m._42;
	LMATH_PRECISION s14 = m._31 * m._44 - m._34 * m._41;
	LMATH_PRECISION s15 = m._31 * m._43 - m._33 * m._41;
	LMATH_PRECISION s16 = m._31 * m._42 - m._32 * m._41;

	LMATH_PRECISION s21 = m._23 * m._44 - m._24 * m._43;
	LMATH_PRECISION s22 = m._22 * m._44 - m._24 * m._42;
	LMATH_PRECISION s23 = m._22 * m._43 - m._23 * m._42;
	LMATH_PRECISION s24 = m._21 * m._44 - m._24 * m._41;
	LMATH_PRECISION s25 = m._21 * m._43 - m._23 * m._41;
	LMATH_PRECISION s26 = m._21 * m._42 - m._22 * m._41;

	LMATH_PRECISION s31 = m._23 * m._34 - m._24 * m._33;
	LMATH_PRECISION s32 = m._22 * m._34 - m._24 * m._32;
	LMATH_PRECISION s33 = m._22 * m._33 - m._23 * m._32;
	LMATH_PRECISION s34 = m._21 * m._34 - m._24 * m._31;
	LMATH_PRECISION s35 = m._21 * m._33 - m._23 * m._31;
	LMATH_PRECISION s36 = m._21 * m._32 - m._22 * m._31;

	LMATH_PRECISION c11 = +(m._22 * s11 - m._23 * s12 + m._24 * s13);
	LMATH_PRECISION c12 = -(m._21 * s11 - m._23 * s14 + m._24 * s15);
	LMATH_PRECISION c13 = +(m._21 * s12 - m._22 * s14 + m._24 * s16);
	LMATH_PRECISION c14 = -(m._21 * s13 - m._22 * s15 + m._23 * s16);

	LMATH_PRECISION invDet = 1.0 / (m._11 * c11 + m._12 * c12 + m._13 * c13 + m._14 * c14);

	return {
		c11 * invDet,
		-(m._12 * s11 - m._13 * s12 + m._14 * s13) * invDet,
		+(m._12 * s21 - m._13 * s22 + m._14 * s23) * invDet,
		-(m._12 * s31 - m._13 * s32 + m._14 * s33) * invDet,
		c12 * invDet,
		+(m._11 * s11 - m._13 * s14 + m._14 * s15) * invDet,
		-(m._11 * s21 - m._13 * s24 + m._14 * s25) * invDet,
		+(m._11 * s31 - m._13 * s34 + m._14 * s35) * invDet,
		c13 * invDet,
		-(m._11 * s12 - m._12 * s14 + m._14 * s16) * invDet,
		+(m._11 * s22 - m._12 * s24 + m._14 * s26) * invDet,
		-(m._11 * s32 - m._12 * s34 + m._14 * s36) * invDet,
		c14 * invDet,
		+(m._11 * s13 - m._12 * s15 + m._13 * s16) * invDet,
		-(m._11 * s23 - m._12 * s25 + m._13 * s26) * invDet,
		+(m._11 * s33 - m._12 * s35 + m._13 * s36) * invDet,
	};
}