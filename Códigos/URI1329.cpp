#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{ 
int n,a,m,j,i;

	while(cin>>n&&n!=0){
		m=j=0;

		  for(i=0;i<n;i++){
  			cin>>a;
			if(a)j++;
  			else m++;

  		  }
		 cout<<"Mary won "<<m<<" times and John won "<<j<<" times\n";
       }
    

    return 0;
}

