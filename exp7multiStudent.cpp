#include <iostream>
using namespace std;

class Student
{
    int roll_no;
    char stud_name[25];

public:
    void getdata()
    {
        cout << "\n----------------------------------";
        cout << "\nEnter Roll No. : ";
        cin >> roll_no;

        cout << "Enter Student Name : ";
        cin >> stud_name;
    }

    void putdata()
    {
        cout << "\n----------------------------------";
        cout << "\nRoll No. : " << roll_no;
        cout << "\nStudent Name : " << stud_name;
    }
};

class StudentExam : public Student
{
protected:
    int marks[5];
    int total;

public:
    void accept_data()
    {
        getdata();

        total = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Marks for Subject " << i + 1 << " : ";
            cin >> marks[i];

            total = total + marks[i];
        }
    }

    void display_data()
    {
        putdata();

        for (int i = 0; i < 5; i++)
        {
            cout << "\nMarks of Subject " << i + 1 << " : " << marks[i];
        }

        cout << "\nTotal Marks : " << total << " / 500";
    }
};

class StudentResult : public StudentExam
{
    float percentage;

public:
    void calculate()
    {
        percentage = total / 5.0;

        cout << "\nPercentage : " << percentage << "%";
        cout << "\n----------------------------------";
    }
};

int main()
{
    StudentResult stud;

    stud.accept_data();
    stud.display_data();
    stud.calculate();

    return 0;
}
