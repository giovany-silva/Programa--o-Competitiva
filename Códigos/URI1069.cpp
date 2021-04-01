#include<bits/stdc++.h>

using namespace std;

int main()
{

 string word;
 int a,b,n,i,tam,j,sum,aux;

 cin>>n;
 
 for(i=0;i<n;i++){
    a=b=sum=j=aux=0;

    cin>>word;
    
    tam=word.size();
    
   while(j<tam)
    {
        if(word[j]=='<'){
            
            while(word[j]!='>'&&j<tam){
                if(word[j]!='.')a++;
             j++;   
            }
            
       
    
        }
         else if(word[j]=='>'){


       while(word[j]!='<'&&j<tam){
                if(word[j]!='.')b++;
             j++;   
            }
                sum+=min(a,b);
             
      if(a>b)aux+=a-b;

      else if(aux<=b-a){
      
       sum+=aux;

       aux=0;
       
      
      }
     else{

       sum+=b-a;
  
       aux+=-b+a;
      
     }
              a=b=0;  

        }
        else j++;
    }
     
     std::cout << sum<< std::endl;
 }
 
    return 0;
}

