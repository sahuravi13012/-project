#include <iostream>
using namespace std;

// class cube
// {
//     int side;

// public:
//     cube(int);
//     int dis()
//     {

//         cout << "\n in cube side is= " << x;
//     }
// };

// cube::cube(int x)
// {
//     side = x;
// }
// int main()
// {
//     cube c1(2);
//     cube c3(5);
//     cube c2(5);

//     c1.dis();
//     c2.dis();
//     c3.dis();
class shape
{
private:
    int r;

public:
    int rec, l, b;
    float area;

    void input()
    {
        cout << "enter the radius of circle";
        cin >> r;

        cout << "enter the length and breadth=";
        cin >> l >> b;
    }
    void circle()
    {
        //  cout << "enter the radius of circle-" << r;
        area = 3.14 * r * r;
    }
    void rectangle()
    {

        rec = l * b;
    }

    void dis()
    {
        cout << "area of circle=" << area << endl;
        cout << "area of rectangle=" << rec;
    }
};

int main()
{
    shape obj;
    obj.input();

    obj.circle();
    obj.rectangle();
    obj.dis();

    return 0;
}
