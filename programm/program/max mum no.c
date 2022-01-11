#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    /*  
    scanf("%d %d",&a,&b);

     
   //--------find max b/w two no------- 

    if(a>b){
        printf("maximum %d",a);
    }

    else if (b>a)
    {
     printf(" maximum %d",b);
    }
    
    else{
        printf("both are equal ");
    } */

    //--------find max b/w three no------

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {

        printf("maximum=%d", a);
    }

    else if (b > c && b > a)
    {
        printf("maximum=%d", b);
    }
    else if (c > a && c > b)
    {
        printf("maximum=%d", c);
    }
    else
    {
        printf("maximum=%d", c);
    }

    return 0;
}
