#include<iostream>
using namespace std;
class Complex
{
private:
int real,imag;
public:
Complex(int r=0,int i=0):real(r),imag(i){}

Complex add(const Complex&c){
return Complex(real-c.real,imag-c.imag);
}
Complex sub(const Complex&c){
return Complex (real-c.real,imag-c.imag);
}
void display()const{
cout<<real<<"+i"<<imag<<endl;
}
};
int main(){
Complex c1(4,5),c2(8,9);
Complex sum=c1.add(c2);
Complex diff=c1.sub(c2);

cout<<"first complex number=";
c1.display();
cout<<"second complex number=";
c2.display();
cout<<"addition=";
sum.display();
cout<<"substraction=";
diff.display();
return 0;
}

