#include "Vector2.h"
#include <stdexcept>

namespace Vector2
{
	float Vector2Maths::Add(float x, float y)
	{
		return x + y;
	}

	float Vector2Maths::Subtract(float x, float y)
	{
		return x - y;
	}

	float Vector2Maths::Multiplication(float x, float y)
	{
		return x * y;
	}

	float Vector2Maths::Divide(float x, float y)
	{
		return x / y;
	}
}