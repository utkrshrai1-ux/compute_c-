#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,v=0,count=0;
float a;
cin>>a;
int b=a;
float c;
for(i=1;a>1;i++)
{
    a=a/10;
    count++;
int z= (pow(10,count));
c=b%z;
c=c/(pow(10,(count-1)));
c=floor(c) ;
v=v+c;
}
cout<<v;
return 0;
}
