#include <iostream>
using namespace std;

int main()
/*{
    /* int n = 37;
    int isprime = 1;
    for (int i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        cout << " no is prime";
    }
    else
    {
        cout << " no is not prime";
    } */

{
    int a, b, c;
    cout << "Enter the value a ";
    cin >> a;

    cout << "Enter the value b ";
    cin >> b;

    for ( a; a <= b; a++)
    {
        for (c = 2; c <= a; c++)
        {
            if (a % c == 0)
            {
                break;
            }
        }
            if (a == c)
            {
                cout << a <<endl;
            }
        
    }

    return 0;
}