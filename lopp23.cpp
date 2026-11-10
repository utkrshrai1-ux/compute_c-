#include <bits/stdc++.h>
using namespace std;

int main()
{
   for(int i=1;i<=4;i++)
   {
    for (int j=1;j<=4;j++)
    {
        switch(i)
        {
            case 1:
            case 4:
            cout<<"*";
            continue;
            case 3:
            case 2:
            {
                if(j==2||j==3)
                cout<<" ";
                else
                cout<<"*";
                continue;
            }
            default:
            break;
        }
    }
    cout<<endl;
   }

}