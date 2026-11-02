#include <iostream>
using namespace std;
int main()
{
double bs,da,hra,gs;
cout<<"enter base salary \n";
cin>>bs;
da=0.25*bs;
hra=0.15*bs;
gs=bs+da+hra;
cout<<"the gross salary is "<<gs;
return 0;
}