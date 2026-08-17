#include<iostream>
using namespace std;
class fraction
{
public:
int num,den;
void getData()
{
cout<<"enter numerator:";
cin>>num;
cout<<"enter denominator:";
cin>>den;
}
void add(fraction f1,fraction f2)
{
num=f1.num*f2.den+f2.num*f1.den;
den=f1.den*f2.den;
}
void subtract(fraction f1,fraction f2)
{
num=f1.num*f2.den-f2.num*f1.den;
den=f1.den*f2.den;
}
void display()
{
cout<<num<<"/"<<den<<endl;
}
};
int main()
{
fraction f1,f2,sum,diff;
cout<<"enter first fraction:"<<endl;
f1.getData();
cout<<"enter second fraction:"<<endl;
f2.getData();
sum.add(f1,f2);
diff.subtract(f1,f2);
cout<<"\nAddition=";
sum.display();
cout<<"substraction=";
diff.display();
return 0;
}
