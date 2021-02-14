#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin>>n;
  vector<int> vet(n);
  for(int i = 0;i < n;i++){
    cin>>vet[i];
  }
  sort(vet.begin(),vet.end());
  int dif = vet[n-1] - vet[0]; 
  cout<<dif<<" ";
  unsigned long long int menor = 0,maior = 0;
  for(int i = 0;i < n;i++){
    if(vet[i] != vet[0]){
      break;                        
    }
    menor++;
  }

  for(int j = n-1;j >= 0;j--){
    if(vet[j] != vet[n-1]){
      break;
    }
    maior++;
  }
  
  if(menor == n){
    unsigned long long int resp = (maior*(maior-1))/2;
    cout<<resp<<endl;
  }else{
    unsigned long long int resp = menor*maior;
    cout<<resp<<endl;
  }

}
          
