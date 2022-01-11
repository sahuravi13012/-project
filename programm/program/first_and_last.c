#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, last, first, product = 1;
  printf("enter the number=");
  scanf("%d", &n);

  last = n % 10;
  //first = n;
  while (n >= 10)
  {

    // product = product * last;
    n = n / 10;
    first = n;
    //  sum = sum + last;
  }
  //-----------swap first and second digit -----------
  /*int temp = first;
    first = last;
    last = temp;*/
  /* first = first + last;
    last = first - last;
    first = first - last;
      printf("first=%d\n last=%d", first, last);
    */

  //-------sum of first and srecond digit-------
  // sum = first + last;
  // printf("the sum of first and last digit=%d", sum);

  printf("first digit=%d\n", first);
  printf("last digit=%d\n", last);

  // printf("the product=%d", product);

  return 0;
}
