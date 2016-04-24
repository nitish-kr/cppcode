#include<iostream>
#include<math.h>

using namespace std;
int main()
{
     int t,h=0,m=0,s=0;
     cin>>t;
     if(t>=3600)
        {
          h=t/(3600);
          t%=(3600);
        }
     if(t>=60)
        {
          m=t/60;
          t%=60;
        }
     s=t;
     cout<<h<<":"<<m<<":"<<s<<endl;
     return 0;
}
