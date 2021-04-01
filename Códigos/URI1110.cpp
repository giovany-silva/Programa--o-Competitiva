#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    int r,n,s,t,I,J,qtd=0,aux;
    std::deque<int>lista;
   while(1)
   {
       cin>>n;
       if(!n)break;
     for(I=1;I<=n;I++)lista.push_front(I);
     cout<<"Discarded cards:";
    
     while(lista.size()>1)
     {
         cout<<" "<<lista.back();
         lista.pop_back();
        if((lista).size()>1)cout<<",";
         lista.push_front(lista.back());
         lista.pop_back();
         
     }
     cout<<"\nRemaining card: "<<lista.front()<<"\n";
 
    
    lista.clear(); 
    
   }
   
    return 0;
}

