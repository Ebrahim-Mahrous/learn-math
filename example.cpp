#define LMATH_PRECISION double
#include "math/lmath.hpp"
#include <cstdio>

int main(int argc, char *argv[]) {
	static Mat4 m1 = { 1.0, 0.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0, 4.0 };
	
	static Mat4 m2 = { 4.0, 0.0, 0.0, 0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 6.0, 0.0, 0.0, 0.0, 0.0, 7.0 };

	Mat4 m3 = m1 * m2;
	Mat4 m4 = MatInverse(m3);
	Mat4 m5 = m4 * m3;

	printf("m3 = {\n %lf, %lf, %lf, %lf\n %lf, %lf, %lf, %lf\n %lf, %lf, %lf, %lf\n %lf, %lf, %lf, %lf\n}\n",
		m5._11, m5._12, m5._13, m5._14, m5._21, m5._22, m5._23, m5._24, m5._31, m5._32, m5._33, m5._34, m5._41, m5._42, m5._43, m5._44);

	/*
		ouput should be :
		m3 = {
			1.000000, 0.000000, 0.000000, 0.000000
			0.000000, 1.000000, 0.000000, 0.000000
			0.000000, 0.000000, 1.000000, 0.000000
			0.000000, 0.000000, 0.000000, 1.000000
		}
	*/

	Vec2 v1 = { 1.0, 0.0 };
	Vec2 v2 = { 0.0, 1.0 };

	LMATH_PRECISION ang = aangle(v1, v2);
	printf("aangle(v1, v2) = %lf\n", ang);

	/*
		angle(v1, v2) vs aangle(v1, v2):
		angle (with a single 'a') computes the cosine of the angle between the two vectors.
		aangle(with two 'a') computes the effective angle (the samllest) between the two vectors.
		output should be:
		aangle(v1, v2) = 1.570796;
	*/

	float t = 4.2f;
	Vec2 v3 = v1 * t;
	Vec2 v4 = t * v2;
	printf("v3 = {%lf, %lf}\nv4 = {%lf, %lf}\n", v3.x, v3.y, v4.x, v4.y);

	/*
		You can left/right multiply vectors and scalers easily just like read equations.
		output should be:
		v3 = {4.200000, 0.000000}
		v4 = {0.000000, 4.200000}
	*/
}