#include <stdio.h>

int main() {
    int i, n, mul;
    printf("input number of terms :");
   scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        mul = i * i * i;
        //printf("number is : %d and cube of %d is :%d\n", i, i, mul);
        printf("number is : %d and cube of %d is :%d\n", i, i, (i*i*i));
    }

    return 0;
}
