#include<bits/stdc++.h>

using namespace std;

int main(){

  int t,n,k;

  cin>>t;
  while(t--){
    cin>>n>>k;
    if(k > n){
      cout<<"NO"<<endl;
    }else if(k == n){
      cout<<"YES"<<endl;
      for(int i = 0;i < k-1;i++){
        cout<<1<<" ";
      }
      cout<<1<<endl;
    }else if(n % 2 == 0 and k % 2 == 0){
      cout<<"YES"<<endl;
      for(int i = 0;i < k-1;i++){
        cout<<1<<" ";
      }
      cout<<(n-k+1)<<endl;
    }else if(n % 2 == 0 and k % 2 != 0){
      if(n < 2*k){
        cout<<"NO"<<endl;
      }else{
        for(int i = 0;i < k-1;i++){
          cout<<2<<" ";
        }
        cout<<(n-2*k+2)<<endl;
      }
    }else if(n % 2 != 0 and k % 2 == 0){
      cout<<"NO"<<endl;
    }else if(n % 2 != 0 and k % 2 != 0){
      cout<<"YES"<<endl;
      for(int i = 0;i < k-1;i++){
        cout<<1<<" ";
      }
      cout<<(n-k+1)<<endl;
    }
    
  }

  return 0;
}


