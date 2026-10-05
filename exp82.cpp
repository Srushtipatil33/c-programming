#include<iostream>
using namespace std;
class Number
{
private:
int n;
public:
 Number(int X)
 {
 n= X;
 }
 void operator++()
 {
 ++n;
 }
 void display()
 {
cout<<"Number="<<n<<endl;
}

};
int main()
{
Number obj(100);
cout<<"Before increment:"<<endl;
obj.display();
++obj;
cout<<"After increment:"<<endl;
obj.display();
return 0;
}
