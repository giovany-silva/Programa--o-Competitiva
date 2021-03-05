#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
  
  int t,tam,zero,um;
  string num;
 
  cin>>t;
  while(t--){
    zero = 0;um = 0;
    cin>>num;
    tam = num.size();
    vector<int> a(tam,0),b(tam,0);//zero e um
 
    for(int i = 0;i < tam;i++){
      if(num[i] == '0'){
        zero++;
        a[i]++;
        if(i > 0){
          a[i]+=a[i-1];
          b[i] = b[i-1];
        }
      }else{
        um++;
        b[i]++;
        if(i > 0){
          b[i]+=b[i-1];
          a[i] = a[i-1];
        }
      }
    }
    int mudancas = INT_MAX;
    //  TESTE CASO 1 (TUDO ZERO)
    mudancas = min(mudancas,um);
    // TESTE CASO 2 (TUDO UM)
    mudancas = min(mudancas,zero);
    // TESTE CASO 3 e 4
 
    int tot = INT_MAX,tot2 = INT_MAX;
    for(int i = 0;i < tam-1;i++){
      tot = min(tot,b[i] + (a[tam-1] - a[i+1]));
      tot2 = min(tot2,a[i] + (b[tam-1] - b[i+1]));
      //cout<<tot<<" "<<tot2<<endl;
    }
    mudancas = min(mudancas,min(tot,tot2));
 
    cout<<mudancas<<endl;
  }
  return 0;
}