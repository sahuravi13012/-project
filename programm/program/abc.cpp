#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void show1()
    {
        a = 5;
    }
};

class B
{
public:
    int b;
    void show2()
    {
        b = 15;
    }
};

class C : public A, public B
{
public:
    int c;
    void show3()
    {
        c = 3;
        cout << "value of a =" << a << endl;
        cout << "value of b =" << b << endl;

        cout << "value of c = " << c << endl;
    }
};

int main()
{
    C obj;
    obj.show1();
    obj.show2();
    obj.show3();
    return 0;
}
