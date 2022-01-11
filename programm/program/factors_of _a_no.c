#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, n2;
    printf("enter first number=");
    scanf("%d", &n);

    printf("enter second number=");
    scanf("%d", &n2);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && n2 % i == 0)
        {
            printf(" %d ", i);
        }
    }

    return 0;
}
