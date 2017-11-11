#pragma once

#include "QAngle.h"
#include "Vector.h"
#include "Matrix.h"

#include "Engine.h"

#include <DirectXMath.h>

#define RAD2DEG(x) DirectX::XMConvertToDegrees(x)
#define DEG2RAD(x) DirectX::XMConvertToRadians(x)

namespace Math
{
	void NormalizeAngles(QAngle& angles);
	void ClampAngles(QAngle& angles);
	void VectorTransform(const Vector& in1, const matrix3x4_t& in2, Vector& out);
	void AngleVectors(const QAngle &angles, Vector& forward);
	void AngleVectors(const QAngle &angles, Vector& forward, Vector& right, Vector& up);
	void VectorAngles(const Vector& forward, QAngle& angles);
	float GetFov(const QAngle& viewAngle, const QAngle& aimAngle);
	QAngle CalcAngle(Vector src, Vector dst);
	bool WorldToScreen(const Vector& in, Vector& out);
}