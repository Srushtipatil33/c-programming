#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:

    // Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    float area()
    {
        return length * breadth;
    }

    // Function to calculate perimeter
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    float l, b;

    // Taking input from user
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    // Passing values to constructor
    Rectangle r(l, b);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
