#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    int r,n,s,i,t;
    cin>>n;
   while(n>0)
   {
     cin>>t;
     int vet[t];
     for(i=0;i<t;i++)cin>>vet[i];
         int I,J,qtd=0,aux; 
    for(I=0;I<t-1;I++)
    {
                for(J=0;J<t-1-I;J++)
            {
                if(vet[J]>vet[J+1])
                {
                    qtd++;
                    aux=vet[J];
                    vet[J]=vet[J+1];
                    vet[J+1]=aux;
                }
            }    
    
          if(qtd==0)break;    
    } 

      cout<<"Optimal train swapping takes "<< qtd <<" swaps.\n";

      n--; 
    
   }
   
    return 0;
}

