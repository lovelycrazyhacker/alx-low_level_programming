<<<<<<< HEAD
nclude <stdio.h>
/**
 *  * main - function that checks for uppercase character.
=======
#include <stdio.h>
/**
 * main - function that checks for uppercase characters.
>>>>>>> 9b10c93c86fb36d102643c3626ea8a7c27b08750
 * Return: 0
 */
int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
<<<<<<< HEAD
			if (h == 100)
=======
			if (h ==100)
>>>>>>> 9b10c93c86fb36d102643c3626ea8a7c27b08750
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
<<<<<<< HEAD
		else if (h % 3 == 0)
			printf("Fizz ");
=======
		else if (h% 3 == 0)
			printf(Fizz ");
>>>>>>> 9b10c93c86fb36d102643c3626ea8a7c27b08750
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
