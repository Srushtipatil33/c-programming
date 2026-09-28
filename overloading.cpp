#include <iostream>
using namespace std;


float area(float r)
{
    return 3.14 * r * r;
}


float area(float l, float b)
{
    return l * b;
}


float area(float b, float h, int)
{
    return 0.5 * b * h;
}

int main()
{
    float r, l, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area(r) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << area(l, b) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle = " << area(b, h, 0) << endl;

    return 0;
}