#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,k;

  cin>>n>>k;
  vector<int> vet(n);
  for(int i = 0;i < n;i++){
    cin>>vet[i];
    if(i > 0){
      vet[i]+=vet[i-1];
    }
  }
  int id = 1,sum_id = INT_MAX;
  for(int i = 0;i <= n-k ;i++){
    if(i == 0){
      sum_id = vet[i+k-1];
    }else{
      if(vet[i+k-1] - vet[i-1] < sum_id){
        sum_id = vet[i+k-1] - vet[i-1];
        id = i+1;
      }
    }
  }

  cout<<id<<endl;

  return 0;
}

