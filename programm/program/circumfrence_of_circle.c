#include<stdio.h>

int main(int argc, char const *argv[])
{
    int r,circumfrence,area;
     
     printf("Enter the value of radius");
     scanf("%d",&r);

     circumfrence =(2*3.14*r);
    area=(3.14*r*r);

    printf("circumfrence of circle=%d\n",circumfrence);
    printf("area of circle=%d",area);

    return 0;
}
