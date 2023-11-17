#include <stdio.h>
/**
 * mul - this is a function
 * main - this is a function
 * @a: parameter
 * @mul: parameter1
 * Return: o
 */
float mul(float a);
int main(void)
{
	printf("the square is :%.2f\n", mul(20));
	return (0);
}
float mul(float a)
{
	float mul = (a * a);
	return (mul);
}
