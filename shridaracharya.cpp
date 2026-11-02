#include <bits/stdc++.h>
using namespace std;

int main() 
{
  float a,b,c,z;
//   cin>>a>>b;
//   cout<<"the value of b "<<b<<endl;
//   cout<<"the value of a "<<a<<endl;
//   a+=b;
  
// cout <<"the value of a+=b "<<a<<endl;
// a-=b;
  
// cout <<"the value of a-=b "<<a<<endl;
// a*=b;
  
// cout <<"the value of a*=b "<<a<<endl;
// a/=b;
// cout <<"the value of a/=b "<<a<<endl;
cin>>a;
cout<<" the value of a" <<a;
cin>>b;
cout<<" the value of b" <<b;
cin>>c;
cout<<" the value of c" <<c;
z=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
cout<<"the value of z is "<<z;
return 0;
}