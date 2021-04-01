#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n=1,m=1,q,p,I,J,d;
   
   while(1)
   {
       
       cin>>n>>m;
       if(n==0&&m==0)break;
   d=0;
   pair<string[100],bool>servidores[n];
  
     string aplicacoes;    
   for(I=0;I<n;I++)
   {
       cin>>q;
       for(J=0;J<q;J++)
       {
       cin>>servidores[I].first[J];
       
       }
       
   }

    for(I=0;I<m;I++)
       {
           int a;
       for(a=0;a<n;a++)servidores[a].second=false;
           cin>>p;
           for(J=0;J<p;J++)
           {
               cin>>aplicacoes;
               int k,l;
                   for(k=0;k<n;k++)
                   {
                        if(!servidores[k].second)
                        {
                            for(l=0;l<100;l++)
                            {
                                if(aplicacoes==servidores[k].first[l])
                                {
                                    
                                    d++;    
                                    servidores[k].second=true;
                                    break;
                                }
                            }
                            
                        }
                
                   
                   }
           
               }
           }
    
    cout << d << endl;  
     }

    return 0;
}
