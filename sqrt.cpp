#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
float h;
cin>>h;
int j=h;
for(int i=1;h>=1;i++)
{
    h=h/10;
    count++;
}



int c=0,dyj=0,e=count-1,ewr,sfd,sfs,p=count-2;string a=" ",fdw=" "; int g;
if(e==0)
{
     for(int k=1;k<=9;k++)
            {
                float o=j/pow(10,e);
        int t=floor(o);
         int y=k+1;
         int m=pow(k,2);
         int n=pow(y,2);
         int d=t-n;
         int b=t-m;
         if(d<0)
         {
        int f=pow(k,2);
        int ki=t%f;
         g=k;
        a=to_string(ki);
        fdw=to_string(g);
        break;
         }
         }
}
else
{
 for(int i=1;e!=0&&p!=0;i++)
 {
    
    if(count%2!=0)
    {
        c++;
        if(c==1)
        {
            for(int k=1;k<=9;k++)
            {
                float o=j/pow(10,e);
        int t=floor(o);
         int y=k+1;
         int m=pow(k,2);
         int n=pow(y,2);
         int d=t-n;
         int b=t-m;
         if(d<0)
         {
        int f=pow(k,2);
        int ki=t%f;
         g=k;
        a=to_string(ki);
        fdw=to_string(g);
        break;
         }
         }
         }

         else if(c==2)
         {
            int po=pow(10,e);
            int z=j%po;
            float u=z/pow(10,e-2);
            e=e-2;
            int v=floor(u);
            string s=to_string(v);
            a=a+s;
            int l=stoi(a);
           int gu=2*g;
           string st=to_string(gu);
           for(int k=0;k<=9;k++)
           {
            string str=to_string(k);
            string stri=st+str;
            int ut=stoi(stri);
            int utk=k*ut;
            int d=l-utk;
            int x=k+1;
            string jh=to_string(x);
            string gh=st+jh;
            int hgc=stoi(gh);
            int fc=hgc*x;
            int b=l-fc;
            if(b<0)
            {
             ewr=d;//ye difference hai 52
             sfd=k;// ye 6
             string gg=to_string(sfd);
             sfs=ut;//ye 46
             fdw=fdw+gg;
             break;
            }
           }
         }

         else if(c>=3)
         {
            int po=pow(10,e);
            int z=j%po;
            float u=z/pow(10,e-2);
            e=e-2;
            int v=floor(u);
            string ghg=to_string(v);//95
            string fdh=to_string(ewr);
           string chg=fdh+ghg;//5295
           int l=stoi(chg);
           int fht=sfd+sfs;//52
           string ftt=to_string(fht);
           for(int k=0;k<=9;k++)
           {
              string str=to_string(k);
            string stri=ftt+str;//521,522,523,524...
            int ut=stoi(stri);
            int utk=k*ut;//1*521,2*522,....
            int d=l-utk;//5295-9*529
            int x=k+1;
            string jh=to_string(x);
            string gh=ftt+jh;
            int hgc=stoi(gh);
            int fc=hgc*x;
            int b=l-fc;
             if(b<0)
            {
             ewr=d;//ye difference hai 534
             sfd=k;// ye 9
             string gg=to_string(sfd);
             sfs=ut;//ye 529
             fdw=fdw+gg;
             break;
            }
               
           }
         }

         else
         continue;
        
    }
    else
    {
        dyj++;
         if(dyj==1)
        {
            for(int k=1;k<=9;k++)
            {
                float o=j/pow(10,p);
        int t=floor(o);
         int y=k+1;
         int m=pow(k,2);
         int n=pow(y,2);
         int d=t-n;
         int b=t-m;
         if(d<0)
         {
        int f=pow(k,2);
        int ki=t%f;
         g=k;
        a=to_string(ki);
        fdw=to_string(g);
        break;
         }
         }
         }
         else if(dyj==2)
         {
             int po=pow(10,p);
            int z=j%po;
            float u=z/pow(10,p-2);
            p=p-2;
            int v=floor(u);
            string s=to_string(v);
            a=a+s;
            int l=stoi(a);
           int gu=2*g;
           string st=to_string(gu);
           for(int k=0;k<=9;k++)
           {
            string str=to_string(k);
            string stri=st+str;
            int ut=stoi(stri);
            int utk=k*ut;
            int d=l-utk;
            int x=k+1;
            string jh=to_string(x);
            string gh=st+jh;
            int hgc=stoi(gh);
            int fc=hgc*x;
            int b=l-fc;
            if(b<0)
            {
             ewr=d;//ye difference hai 52
             sfd=k;// ye 6
             string gg=to_string(sfd);
             sfs=ut;//ye 46
             fdw=fdw+gg;
             break;
            }
           }
         }
        else 
         {
            int po=pow(10,p);
            int z=j%po;
            float u=z/pow(10,p-2);
            p=p-2;
            int v=floor(u);
            string ghg=to_string(v);//95
            string fdh=to_string(ewr);
           string chg=fdh+ghg;//5295
           int l=stoi(chg);
           int fht=sfd+sfs;//52
           string ftt=to_string(fht);
           for(int k=0;k<=9;k++)
           {
              string str=to_string(k);
            string stri=ftt+str;//521,522,523,524...
            int ut=stoi(stri);
            int utk=k*ut;//1*521,2*522,....
            int d=l-utk;//5295-9*529
            int x=k+1;
            string jh=to_string(x);
            string gh=ftt+jh;
            int hgc=stoi(gh);
            int fc=hgc*x;
            int b=l-fc;
             if(b<0)
            {
             ewr=d;//ye difference hai 534
             sfd=k;// ye 9
             string gg=to_string(sfd);
             sfs=ut;//ye 529
             fdw=fdw+gg;
             break;
            }
               
           }
         }


    }

 }
}
fdw=fdw+".";
 cout<<ewr<<" ewr"<<endl;
 cout<<sfd<<" sfd"<<endl;
 cout<<sfs<<" sfs"<<endl;
 cout<<fdw<<" before"<<endl;
 cout<<e<<" e"<<endl;
 cout<<p<<" p"<<endl;
int cds=0;
if(e==0||p==0)
{
    
    for(int i=1;cds<=7;i++)
    { cds++;
          int l=ewr*100;//53400
           int fht=sfd+sfs;//538
           string ftt=to_string(fht);
           for(int k=0;k<=9;k++)
           {
              string str=to_string(k);
            string stri=ftt+str;//5381,5382,55383,5384...
            int ut=stoi(stri);
            int utk=k*ut;//1*5381,2*5382,....
            int d=l-utk;//53400-9*5389
            int x=k+1;
            string jh=to_string(x);
            string gh=ftt+jh;
            int hgc=stoi(gh);
            int fc=hgc*x;
            int b=l-fc;
             if(b<0)
            {
             ewr=d;//ye difference hai 534
             sfd=k;// ye 9
             string gg=to_string(sfd);
             sfs=ut;//ye 529
             fdw=fdw+gg;
             continue;
            }
           }
        }
        }
        cout<<fdw<<" after"<<endl;
    }