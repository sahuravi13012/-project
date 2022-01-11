#include <iostream>
using namespace std;

struct employe
{
    int eID;
    char favchar;
    float salary;
};
 
int main()
{
    struct employe Ravi;
    Ravi.eID = 15466;
    Ravi.favchar = 'c';
    Ravi.salary = 201649;

    cout << Ravi.eID << endl;
    cout << Ravi.favchar << endl;
    cout << Ravi.salary << endl;

    return 0;
}