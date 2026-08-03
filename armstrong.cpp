#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int num,sum,i,r;
sum=0;
cout<<"enter a number=";
cin>>num;
i=n;
while(num>0)
{r=num%10;
sum=sum+pow(r,3);
num=num/10;
}
if(i==sum)
cout<<"armstrong number";
else
cout<<"not armstrong number";
return 0;
}

