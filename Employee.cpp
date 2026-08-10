#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
int empid;
string name;
float salary;
public;
void acceptDetails(){
cout<<"Enter Employee ID:";
cin>>empid;
cin.ignore();
cout<<"Enter Employee Name:";
getline(cin>>ws,name);
cout<<"Enter Employee Salary:";
cin>>Salary;
}
void displayDetails()const{
cout<<"\n.....Employee Details.....\n";
cout<<"Employee ID:"<<employee id<<"\n";
cout<<"Employee Name:"<<employee name<<"\n";
cout<<"Employee Salary:"<<employee salary<<"\n";
}
};
int main(){
Employee s;
emp.acceptDetails();
emp.displayDetails();
return 0;
}


