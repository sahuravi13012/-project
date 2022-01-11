#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n, i, power, res = 1;
    printf("enter any no ");
    scanf("%d", &n);

    printf("enter power ");
    scanf("%d", &power);
    for (i = 1; i < power; i++)
    {
        res *= n;
    }
    printf("result=%d", res);
    return 0;
}
