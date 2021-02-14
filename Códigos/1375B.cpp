#include<bits/stdc++.h>
 
using namespace std;
int mdc(int num1, int num2) {
 
    int resto;
 
    do {
        resto = num1 % num2;
 
        num1 = num2;
        num2 = resto;
 
    } while (resto != 0);
 
    return num1;
}
int mmc(int num1,int num2){
  
  return (num1*num2)/mdc(num1,num2);
}
 
string multi(string s,int t){
  string res = s;
  for(int i = 1;i <  t;i++){
    res+=s;
  }
  return res;
}
 
int main(){    
  string s,t;        
  int n;         
  cin>>n;
  
  while(n--){
    cin>>s;
    cin>>t;
    int tamS = s.size();
    int tamT = t.size();
    int x = mmc(tamS,tamT);
    string a = multi(s,x/tamS),b = multi(t,x/tamT);
    if(a == b){
      cout<<a<<endl;
    }else{
      cout<<-1<<endl;
    }
 
  }
}