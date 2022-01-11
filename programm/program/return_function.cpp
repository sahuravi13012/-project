#include <iostream>
using namespace std;

/*----------without return function product function------*/
void sum(int a, int b, int c)
{
    c = a + b;

    return;
}
int main()
{
    int x = 6, y = 9;
    sum(x, y);
    cout << sum(x, y);
    return 0;
}
