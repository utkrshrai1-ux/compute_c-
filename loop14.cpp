#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=6;i++)
    {
     for(int j=1;j<=11;j++)
        { 
            switch (i)
            {
            case 1:
            {
            if(j==6)
            cout<<"*"<<" ";
            else
            cout<<"  ";
            continue;
            } 
            case (2):
            case (3):
            case (4):
            case (5):
            case (6):
            {
               if(j==6-(i-1)||j==6+(i-1))
               {
                cout<<"*"<<" ";
               }
               else
               {
                cout<<"  ";
               }
               continue;
            }
            default:
                break;
            }
         }
        cout<< endl;
    }


    for(int i=5;i>=1;i--)
    {
       
        for(int j=1;j<=11;j++)
        { 
            switch (i)
            {
            case (6):
            case (5):
            case (4):
            case (3):
            case 2:
            {
               if(j==6-(i-1)||j==6+(i-1))
               {
                cout<<"*"<<" ";
               }
               else{
                cout<<"  ";
               }
               continue;
            }
            case 1:
            {
            if(j==6)
            cout<<"*"<<" ";
            else
            cout<<"  ";
                continue;
            }  
            
            default:
                break;
            
            }
        }    
             cout<< endl;
        
    }
        return 0;
    
}
