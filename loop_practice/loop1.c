#include <stdio.h>

int main() {
    int i, sum = 0;
    float a;
    printf("input the 10 numbers :\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Number-%d : %d\n", i, i);
       sum = sum + i;
        a = sum / 10.0;
    }
         printf("The sum of 10 no is : %d\n", sum);
     printf("The Average is : %f\n", a);
    return 0;
}
