#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, r, c, sum = 0;

    printf("enter any number");
    scanf("%d", &n);
    c = n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum * 10 + r;
    }
    if (sum == c)

        printf("it is palindrome");

    else

        printf("it not is palindrome");

    return 0;
}
