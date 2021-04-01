#include<bits/stdc++.h>


using namespace std;

int main(){
  
  string str;
  int t;
  cin>>t;
  while(t--){
    cin>>str;
    int tam = str.size(),deletadas = 0;
    for(int i = 0;i < tam;i++){
      if(str[i] == 'B' and i > deletadas){
        deletadas+=2;
      }
    }
    cout<<tam-deletadas<<endl;
  }
  return 0;
}
