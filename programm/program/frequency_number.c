#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, r, frq[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("enter any number=");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        frq[r] = frq[r] + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nfrequency of %d=%d", i, frq[i]);
    }

    return 0;
}
