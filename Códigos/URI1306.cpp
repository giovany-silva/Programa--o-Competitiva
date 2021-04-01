#include <bits/stdc++.h>
using namespace std;
int main()
{
   
   int r,n,s,i=1;
   while(1)
   {
       cin>>r>>n;
       if(r==0&&n==0)break;
       r-=n;
       if(r>0)
       {
         s=r%n;
         r=r/n;
         if(s>0)s=1;
         r+=s;
             
       }
       else r=0;

       cout <<"Case "<<i<<": ";
       if(r<=26)cout<<r<< std::endl;
       else cout<<"impossible"<<endl;
      i++; 
   }
   
    return 0;
}
