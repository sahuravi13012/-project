#include<stdio.h>

int main(int argc, char const *argv[])
{
     int n;
     printf("enter the value of n\n");
     scanf("%d",&n);
     if (n%2==0)
     {
       printf("even");
     }
     else {
         printf("odd");
     }
     
    return 0;
}
