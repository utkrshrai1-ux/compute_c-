#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cout<<"a must be even and is no. of rows and b is no of prints must be odd"<<endl;
cin>>a>>b;

for(int i=1;i<=a;i++)
{
   for(int j=1;j<=b;j++)
{
if(i==1)
     {
        cout<<"*"<<" ";
     continue;
    }
if(j>=1 && j<i ||j>=b-(i-2))
      cout<<"  ";
else 
      cout<<"*"<<" ";
}
       cout<<endl;
}
return 0;
}
