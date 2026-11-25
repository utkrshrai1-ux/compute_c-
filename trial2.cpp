#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
float h;
cin>>h;
int j=h;
for(int i=1;h>=1;i++)
{
    h=h/10;
    count++;
}
cout<<count;
}