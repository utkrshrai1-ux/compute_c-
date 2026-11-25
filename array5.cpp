#include <bits/stdc++.h>
using namespace std;
int main()
{

int z;
cout<<"Enter the no. of element you want."<<endl;
cin>>z;
cout<<endl;
int a[z];
cout<<"Enter the elements"<<endl;
for(int i=z-1;i>=0;i--)
{
    cin>>a[i];
}
cout<<endl;

int b,c,count=-1;
int d[count]={ };
cout<<"Enter the element you want to search from entered element"<<endl;cin>>b;
for(int i=0;i<=z-1;i++)
{
    c=a[i];
    if(c==b)
   {
    count++;
     d[count]=i;
   }
}

if(count>=1)
{
    cout<<"your search element is on the list on the ";
    for(int i=0;i<=count;i++)
    {
      cout<<d[i]<<",";
    }
    cout<<" index";
}
else
cout<<"your search element is not on the list";
}