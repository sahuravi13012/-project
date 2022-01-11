#include <stdio.h>

int main()
{

    int a[5], b[5], sum[5], i, n;

    printf("enter elements of first array\n ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter elements of second array\n ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("sum of two array");
    for (i = 0; i < 4; i++)

    {
        sum[i] = a[i] + b[i];

        printf("%d\t", sum[i]);
    }

    return 0;
}