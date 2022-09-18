#include "main.h"

/**
 *largest_number - returns the largest of 3 numbers
 *@a: first integer
 *@b: second intege
 *@c: third integer
 *@c: third integer
 */

int largest_number(int a, int b, int c)
{
	int largest = a;

	if (largest < b)
	{
		largest = b;
		if (largest < c)
		largest = c;
	}

	return (largest);
}
