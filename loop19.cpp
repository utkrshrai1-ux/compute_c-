#include <bits/stdc++.h>
using namespace std;

int main() {
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
