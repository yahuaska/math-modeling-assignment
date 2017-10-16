#include <stdio.h>
#include <math.h>

int main()
{
	int
		xt = 2,
		k = 4,
		a1 = 4,
		a2 = 6,
		b1 = 2,
		b2 = 4;
	 double
		x = 0,
		y = 0,
		z1 = 0,
		z2 = 0,
		z3 = 0,
		h = 0.5;

	for (int i = 0; i < 229; i++)
	{
		z3 = z3 + h *(xt - (z1 + 2 * b2 * z2 + b1*z2 + (b2^2)*z3 + 2*b1*b2*z3))/(b1*b2^2);
		z2 = z2 + h * z3;
		z1 = z1 + h * z2;

		y = k*z1 - k*a1*a2*z3 - k*a1*z2 + k*a2*z2;
		printf("%d %f\n", i, y);
	}
}