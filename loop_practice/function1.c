#include <stdio.h>
/**
 * main - this is a function
 *sum - this is a function to get sum of numbers
 * @a: parameter
 * @b: parameter1
 * @sum: parameter2
 * Return: sum
 */
int sum(int a, int b);

int main(void)
{
	printf("the total is : %d\n", sum(5, 6));
	return (0);
}
int sum(int a, int b)
{
	int sum = a + b;

	return (sum);
}
