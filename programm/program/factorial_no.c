#include <stdio.h>

int main()
{

    int n, fac = 1, sum = 0, rem, n2, j = 1, m;
    printf("Enter start number ");
    scanf("%d", &n);

    printf("Enter end number ");
    scanf("%d", &n2);

    for (int i = n; i <= n2; i++)
        n2 = m;
    {
        while (n2 != 0)
        {
            rem = 2 % 10;
            n2 = n2 / 10;

            for (int j = 1; j <= rem; j++)

            {
                fac = fac * j;
            }
            sum = sum + fac;
        }

        if (m == sum)
        {
            printf("%d", m);
        }
    }
    return 0;
}