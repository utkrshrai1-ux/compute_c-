#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
string a="is a leap year.";
string b="is a not leap year.";
int c=y%400;
string g=(c==0 )?a:(y%100==0)?a:(y%4==0)?a:b;
cout<<g;
return 0;
}