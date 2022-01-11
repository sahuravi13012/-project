#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, r;
    printf("enter any no");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        printf("%d", r);
    }
    return 0;
}
