#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, hcf, lcm;

    printf("enter the first number = ");
    scanf("%d", &n1);

    printf("enter the second number = ");
    scanf("%d", &n2);

    for (int i = 1; i <= n1 || i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
        // printf(" hcf= %d \n", hcf);
    }
    printf(" hcf= %d \n", hcf);
    lcm = (n1 * n2) / hcf;
    printf("lcm= %d", lcm);
    return 0;
}
