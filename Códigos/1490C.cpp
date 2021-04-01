#include<bits/stdc++.h>

using namespace std;

int main(){
  
  long long t,x;
  cin>>t;

  while(t--){
    cin>>x;
    vector<long long> vet;
    long long i;
    for(i = 1;i*i*i < x;i++){
      vet.push_back(i*i*i);
    }

    long long a = 0,b = i-2;
    bool mark = false;
    if(x != 1){
      while(a <= b){
        if(vet[a] + vet[b] == x){
          mark = true;
          break;
        }else if(vet[a] + vet[b] < x){
          a++;
        }else if(vet[a] + vet[b] > x){
          b--;
        }
      }
    }
    if(mark){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }

  return 0;
}
