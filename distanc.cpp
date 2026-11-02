#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    float d;
    cin>>x1;
    cout<<"the value of x1 "<<x1;
    cin>>x2;
    cout<<"the value of x2 "<<x2;
    cin>>y1;
    cout<<"the value of y1 "<<y1;
    cin>>y2;
    cout<<"the value of y2 "<<y2;
    d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    cout<<d;
    return 0;
}