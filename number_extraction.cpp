#include <bits/stdc++.h>
using namespace std;

int main() 
{
int i, count=0,z, v=0;	
float a, c;
cin>>a;
int b=a;
for(i=1;a>1;i++)
{
    a=a/10;
    count++;
    z=pow(10, count);
    c=b%z;
    c=c/(pow(10, (count-1)));
    c=floor(c);
    v=v+c;
}
cout<<v;
return 0;


}
