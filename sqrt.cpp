#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
float h;
cin>>h;
int j=h;
for(int i=1;h>1;i++)
{
    h=h/10;
    count++;
}
int c=0,y=0,m,n,z=0,b,d,v;
 for(int i=1;c<=4;i++)
 {
    y=i+1;
    m=pow(i,2);
    n=pow(y,2);
    d=j-n;
    b=j-m;
    if(d<0 && count%2!=0)
    {
        c++;
        v=j % m;
        if(v==j)
        break;

    }
   else 
   continue;
 }
}