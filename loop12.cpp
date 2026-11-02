#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int c=0;
for(int i=1;i<=5;i++)
{
    for(int j=(5-c);j>=1;j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    c++;
}
return 0;
}