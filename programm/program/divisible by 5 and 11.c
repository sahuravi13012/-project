#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the any number = ");
    scanf("%d", n);

    if (n % 5  && n%11)
    {
        printf(" this number divisible by 5 and 11 \n", n);
    }
    else
    {
        printf(" this number is not divisible by 5 and 11 \n",n);
    }
 
    return 0;
}
