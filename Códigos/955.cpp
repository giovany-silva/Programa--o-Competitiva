#include<bits/stdc++.h>
using namespace std;
int main()
{
  string txt;
  cin>>txt;
  bool possivel=true;

  if(txt.size()<4)cout<<"No\n";    

  else{
      vector<char>letras_diferentes;
      map<char,int>qtd;
      int tam=txt.size();
      for(int i =0;i<tam;i++){
          if(!binary_search(letras_diferentes.begin(),letras_diferentes.end(),txt[i])){
              letras_diferentes.push_back(txt[i]);
              sort(letras_diferentes.begin(),letras_diferentes.end());
              qtd[txt[i]]=1;
          }
          else{
             qtd[txt[i]]++;
          }
         if(letras_diferentes.size()>4){
              possivel=false;
              break; 
         }   
      }
      if(letras_diferentes.size()==1)possivel=false;
      else if(letras_diferentes.size()==2){
            if(qtd.find(letras_diferentes[0])->second<2 or qtd.find(letras_diferentes[1])->second<2){
               possivel=false;
            }
      }
      if(!possivel)cout<<"No\n";
      else cout<<"Yes\n";
     
  } 

  return 0;
}