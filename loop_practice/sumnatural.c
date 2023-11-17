#include <stdio.h>
int main()
{
	///int i;

	//for (i = 0; i <= 10; i++)
	//{
	//	printf("%d", i);
	//}
	//printf("\n");
	//{
	//	printf("The sum is : 55\n");
	//}
	       //corretion
	int b, sum; //variable

	for (b = 0; b <= 10; b++) // making it print 0..10 using loop
	{
		sum = sum + b;
		printf("%d", b); //output will be 0..10
	}
	printf("\n"); //nextline
	printf("The sum is : %d\n", sum); //result of sum or add up of 0-10
	
	return (0);
}
