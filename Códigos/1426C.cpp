#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
	long long n;
	while(t--){
		cin>>n;
    
    		if(n%(long long)sqrt(n)==0)
			cout<<(long long)sqrt(n)+n/(long long)sqrt(n)-2<<endl;
    		else{
     		 	cout<<(long long)sqrt(n)+n/(long long)sqrt(n)-1<<endl;
    		}
	}

return 0;
}