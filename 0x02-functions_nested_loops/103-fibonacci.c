#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x1 = 0, x2 = 1, xsum;
	float tot_sum;

	while (1)
	{
		xsum = x1 + x2;
		if (xsum > 4000000)
			break;

		if ((xsum % 2) == 0)
			tot_sum += xsum;

		x1 = x2;
		x2 = xsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
