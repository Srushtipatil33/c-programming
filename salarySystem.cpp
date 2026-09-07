#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    float basicSalary;
    float grossSalary;

public:

    // Constructor
    Employee(string n, int i, float salary)
    {
        name = n;
        id = i;
        basicSalary = salary;

        // Calculate gross salary
        grossSalary = basicSalary + (basicSalary * 0.20)
                                    + (basicSalary * 0.10);

        cout << "Employee object created!" << endl;
    }

    // Display employee details
    void display()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name          : " << name << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Gross Salary  : " << grossSalary << endl;
    }

    // Destructor
    ~Employee()
    {
        cout << "\nEmployee object destroyed!" << endl;
    }
};

int main()
{
    string name;
    int id;
    float salary;

    // Take input from user
    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter basic salary: ";
    cin >> salary;

    // Create object using constructor
    Employee emp(name, id, salary);

    // Display details
    emp.display();

    return 0;
}
