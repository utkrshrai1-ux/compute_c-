#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    
    int f= (a=0)?(0):(a>0 && a<=5)?(a*2):(a>5&&a<=10)?(a*5):(a*10);
cout<<f;
    return 0;
}