#include <bits/stdc++.h>
using namespace std;

int main() {
	
    
for(int i=1;i<=6;i++)
{
   for(int j=1;j<=7;j++)
{
if(i==1)
     {
        cout<<"*"<<" ";
     continue;
    }
if(j>=1 && j<i ||j>=7-(i-2))
      cout<<"  ";
else 
      cout<<"*"<<" ";
}
       cout<<endl;
}
    for(int i= 1;i<=4;i++)
	{
	    for(int j=1;j<=7;j++)
	   {
        if(j>=4-(i-1)&&j<=4+(i-1))
	       cout<<"*"<<" ";
           else
           cout<<"  ";
	   }
	   cout<<endl;
	}

}