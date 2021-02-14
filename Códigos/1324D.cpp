#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;

  cin>>n;
  vector<int> a(n),b(n),x(n);

  for(int i = 0;i < n;i++){
    cin>>a[i];
  } 
  for(int i = 0;i < n;i++){
    cin>>b[i];
    x[i] = a[i] - b[i];
  }

  long long int num = 0;
  sort(x.begin(),x.end());

  for(int i = 0;i < n;i++){
    if(x[i] > 0){
      num += i - ((lower_bound(x.begin(),x.end(),(-1)*x[i]+1))-x.begin());
    }
  }

  cout<<num<<endl;

  return 0;
}


