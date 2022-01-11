#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the any number = ");
    scanf("%d", &n);

    if (n > 0)
    {

        printf("positive number", n);
    }

    else if (n < 0)
    {
        printf("number is negative", n);
    }

    else
    {
        printf("number is zero", n);
    }
    return 0;
}
