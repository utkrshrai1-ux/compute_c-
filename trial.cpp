
   #include <bits/stdc++.h>
using namespace std;
int main()
{
for (int i=1;i<=11;i++)
{
   for (int j=1;j<=11;j++) 
   {
    
     switch (i)
     {
     case 1:
     case 2:
     case 10:
     case 11:
     {
        cout<<"*"<<" ";
        continue;
     }
     case 3:
     case 4:
     case 5:
     case 7:
     case 8:
     case 9:
     
     {
        if(j==6)
        cout<<"  ";
        else
        cout<<"*"<<" ";

        continue;
     }
       case 6:
       {
        if(j>=3&&j<=9)
        cout<<"  ";
        else
        cout<<"*"<<" ";

        continue;
     }
     
     default:
        break;
     }

   }
   cout<<endl;
}
  return 0;
}
