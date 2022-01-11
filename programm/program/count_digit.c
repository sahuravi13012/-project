 #include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count=0;

    printf("Enter the number = ");
    scanf("%d",&num);

 /*  do {
    num/= 10;
    count++;
  } while (num != 0);

  printf("Number of digits: %d", count);
  */
 while (num != 0)
 {
    num/= 10;
         count++;
  }
   printf("Number of digits: %d", count);
    return 0;
}
