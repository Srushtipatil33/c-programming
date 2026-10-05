#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
   
    void getData()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    
    void operator-()
    {
        n = -n;
    }

    
    void display()
    {
        cout << "Number = " << n << endl;
    }
};

int main()
{
    Number obj;

    obj.getData();

    cout << "\nBefore unary operator:";
    obj.display();

    -obj;   

    cout << "\nAfter unary operator:";
    obj.display();

    return 0;
}
