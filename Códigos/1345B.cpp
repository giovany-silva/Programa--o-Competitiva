#include<bits/stdc++.h>

using namespace std;


int main(){    

  int t,nCartas;
  
  cin>>t;
  while(t--){
    cin>>nCartas;
    int n,h;
    for(h=1;;h++){
       n = (h*(h+1)/2)*3-h;
       if(n > nCartas){
         break;
       }
    }
    int nPiram = 0;
    while(true){
      h--;
      if(h == 0){
        break;
      }
      n = (h*(h+1)/2)*3-h;
      while(nCartas >= n){
        nCartas-=n;
        nPiram++;
      }
    }
    cout<<nPiram<<endl;
  }
}         

