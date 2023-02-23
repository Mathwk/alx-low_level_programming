#include <stdio.h>
/**
 * main - print 1 to 100 with fizz and buzz in between
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
