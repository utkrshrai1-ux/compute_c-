#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int a;
    cin>>a;
    cout<<endl;
    int n=1;int j;int r=1;
    for(int i=1;i<=a;i++)
    {
        int c=0;
        
        for(j=n;j<=(i-1)+r;j++)
        {
            c++;
            if(c==1)
            {
               r=j;
            }
            cout<<"*"<<" ";
            n++;
        }
        
        cout<<endl;
    }
  return 0;
}
