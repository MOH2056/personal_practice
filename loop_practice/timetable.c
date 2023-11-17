#include <stdio.h>

int main() {
    int i, n, f, mul;
    printf("Input upto the table number starting from 1 :");
    scanf("%d", &n);
    for (f = 1; f <= n; f++)
    for (i = 1; i <= 10; i++)
    {
        mul = f*i;
        printf("%dx%d = %d,", f, i, mul);
    }
    printf("\n");
    {
   /*int j,i,n;
   printf("Input upto the table number starting from 1 : ");
   scanf("%d",&n);
   printf("Multiplication table from 1 to %d \n",n);
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
	    printf("%dx%d = %d, ",j,i,i*j);
      }
     printf("\n");
    }*/
}
    return 0;
}
