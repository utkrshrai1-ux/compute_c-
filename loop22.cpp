#include <bits/stdc++.h>
using namespace std;

int main()
{
	int b=7,c=0;
    
for(int i=1;i<=b;i++)
{
    c++;
   for(int j=1;j<=7;j++)
{
if(i==1&&c<7)
     {
        cout<<"*"<<" ";
     continue;
    }
    if(i>1&&c<7 )
    {
if(j>=1 && j<i ||j>=7-(i-2))
      cout<<"  ";
else 
      cout<<"*"<<" ";
    }
    else
    {
        if(c==7)
        {
            i=1;
            b=4;
            
            break;
        }

         if(j>=4-(i-1)&&j<=4+(i-1)||j==4)
	       cout<<"*"<<" ";
           else
           cout<<"  ";
    }
}
       cout<<endl;
}
}
    
	    
	 
	

