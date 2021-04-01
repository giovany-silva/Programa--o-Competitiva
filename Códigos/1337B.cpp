#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t,h,n,m;
cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>h>>n>>m;
      
    
        
    while(true)
      {
        if((!n && !m)||h<=0)break;
        
        if(h<=20)
          { n=0;
              while(m>0)
              {
                h-=10;
                m--;
              }
            
          }
 
          else 
          {
            
              if(n>0)
              {
                h=floor(h/2)+10;
                n--;
              }
              else 
               while(m>0)
              {
                h-=10;
                m--;
              }
 
 
          }
      }
      if(h<=0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
 
 
return 0;
 
}