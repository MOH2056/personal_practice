#include <stdio.h>

int main() {
    int i, n, mul;
    printf("Input the number : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        mul = n*i;
        printf("%d X %d = %d\n", n, i, mul);
    }

    return 0;
}
