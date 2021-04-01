#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  
  long long n,m,num,A;
 
  cin>>n>>m;
  vector<long long> vet(n);
  for(long long i = 0;i < n;i++){
    cin>>A;
   if(i>0)vet[i]=A+vet[i-1];
   else vet[i]=A;
 
  }
  vector<long long>b(m);
  for(long long i=0;i<m;i++)
  {
    cin>>b[i];
 
  }
 long long j=0;
  for(long long i=0;i<n;i++)
  {
      if(b[j]<=vet[i])
      {
        if(i>0)cout<<i+1<<" "<<b[j]-vet[i-1]<<endl;
        else cout<<i+1<<" "<<b[j]<<endl;        
        if(j!=m-1)i--;
        else break;
        j++;
       
      }
     
 
 
  }
 
  return 0;
}