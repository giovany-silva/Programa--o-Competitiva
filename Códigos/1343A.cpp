#include<bits/stdc++.h>
 
using namespace std; 
int main(){
 
	int t;
	cin>>t;
	long long int vet[31];
	for(int i=0;i<31;i++){
		vet[i] = pow(2,i+1) - 1; 
	}
 
	while(t--){
		int n;
		cin>>n;
		for(int j = 31;j >=0;j--){
			if(n % vet[j] == 0){
				cout<<(int)n / vet[j]<<endl;
				break;
			}
		}
	}
 
	return 0;
}