#include<bits/stdc++.h>

using namespace std;

int main(){

  int a,b,n;
  vector<pair<int,int>> vet;
  cin>>n;
  for(int i = 0;i < n;i++){
    cin>>a>>b;
    vet.push_back(make_pair(a,b));
  }
  sort(vet.begin(),vet.end());
  
  int x = -1;
  for(int i = 0;i < n;i++){

    if(x <= vet[i].second){
      x = vet[i].second;
    }else{
      x = vet[i].first;
    }
  }

  cout<<x<<endl;

  return 0;
}

