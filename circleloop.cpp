#include <bits/stdc++.h>
using namespace std;
int main()
{
for (int i=1;i<=11;i++)
{
   for (int j=1;j<=11;j++) 
   {
    
     if(i==6)
     {
        if(j>=2&&j<=10)
        cout<<"  ";
       
     
     else
    cout<<"*"<<" ";
     }
     else
     cout<<"*"<<" ";

   }
   cout<<endl;
}
  return 0;
}