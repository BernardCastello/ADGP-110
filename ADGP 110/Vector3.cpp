#include "Vector3.h"
#include <stdexcept>

namespace Vector3
{
	float Vector3Maths::Add(float x, float y, float z)
	{
		return x + y + z;
	}

	float Vector3Maths::Subtract(float x, float y, float z)
	{
		return x - y - z;
	}

	float Vector3Maths::Multiply(float x, float y, float z)
	{
		return x * y * z;
	}

	float Vector3Maths::Divide(float x, float y, float z)
	{
		return x / y / z;
	}
}