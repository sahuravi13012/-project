#include <stdio.h>

int main()
{
    int no, count = 0;
    printf("Enter the number ");
    scanf("%d", &no);
    for (no; no > 0;)
    {
        count++;
        no = no / 100;
    }
    printf("%d", count);
}
