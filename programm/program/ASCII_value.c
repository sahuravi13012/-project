#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* int i;

    //Print ASCII values from 0 to 255
    for (i = 0; i <= 255; i++)
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }*/

    //char ch;
    int i;

    for (i = 0; i <= 127; i++)
    {
        //  ch = i;
        printf("%d=%c\n ", i, i);
    }

    return 0;
}
