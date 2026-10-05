#include<iostream>
using namespace std; 

class complex
{
Public:

int real,imag;
Complex(int r,inti):real(r),imag(i){}

complrx operator+(const complex& obj)
{
return complex(real + obj.real,imag+obj.imag);
}
};

int main()
{
complex c1(10.5),c2(2,4);
complex c3=c1+c2;
cout<<c3.real+<<"i"<<c3.imag;
return 0;
}
