#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
//this value is not swap
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// call by refrence with pointer variable
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* call by refrence with  c++ refrence variable
void swapRefrencevari(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/
int main()
{

    int x = 6;
    int y = 5;
    // cout<<"The sum of a and b"<<endl<<sum(a,b)<<endl;
    cout << "the value of x is " << x << "the value of y is" << y << endl;

    // swap(x,y) this value is not swap
    swappointer(&x,&y); //using with pointer variable

   // swapRefrencevari(x,y);

    cout << "the value of x is " << x << "the value of y is" << y << endl;

    return 0;
}