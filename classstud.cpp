#include<iostream>
using namespace std;
class student
{
public:
 int marks;
 void input()
  {
  cout<<"enter a marks=";
  cin>>marks;
  }
 void display()
  {
  cout<<"marks of student="<<marks<<endl;
  }
  };
int main()
{
student stud;
stud.input();
stud.display();
return 0;
}

