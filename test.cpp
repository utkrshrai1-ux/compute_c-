#include <bits/stdc++.h>
using namespace std;
int main()
{
    float c;
    int count;
    int b=346984;
    cin>>count;
    int z= (pow(10,count));
c=b%z;
c=c/(pow(10,(count-1)));
c=floor(c) ;
cout<<c;
return 0;
}