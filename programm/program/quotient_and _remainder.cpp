#include <iostream>
using namespace std;

int main()
{

    int quotient, remainder, divisor, divinded;
    cout << "enter the value of divinded = ";
    cin >> divinded;

    cout << "enter the value of divisor = ";
    cin >> divisor;
    // divisor= 4
    //divinded=20
    //quotient=5
    //remainder=0

    quotient = divinded / divisor;
    remainder = divinded % divisor;

    cout << "the quotient is = " << quotient << endl
         << "the remainder is = " << remainder;

    return 0;
}