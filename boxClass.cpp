#include <iostream>
using namespace std;

class Box
{
private:
    float length;
    float width;
    float height;

public:

    // 1. Default Constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;

        cout << "Default constructor called." << endl;
    }

    // 2. Parameterized Constructor
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;

        cout << "Parameterized constructor called." << endl;
    }

    // 3. Copy Constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;

        cout << "Copy constructor called." << endl;
    }

    // Calculate Volume
    float volume()
    {
        return length * width * height;
    }

    // Display Box Information
    void display()
    {
        cout << "\n----- Box Information -----" << endl;
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called. Box object destroyed." << endl;
    }
};

int main()
{
    // Default constructor
    Box box1;
    box1.display();

    // Parameterized constructor
    Box box2(10, 5, 4);
    box2.display();

    // Copy constructor
    Box box3(box2);
    box3.display();

    cout << "\nProgram is ending..." << endl;

    return 0;
}
