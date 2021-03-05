#include<bits/stdc++.h>

using namespace std;

vector<int>divisores;
void listar_divisores(int n){
    
    int a=1;
    
    
    while(a<n/a){
        if(n%a==0){
            
            divisores.push_back(a);
            divisores.push_back(n/a);
        }a++;
    }
    if((double)n/a==a)divisores.push_back(a);
}

int main(){
 
int t,x,y,n;
 
cin>>t;
 for(int j=0;j<t;j++){
 cin>>n>>x>>y;
 divisores.clear();
 listar_divisores(y-x);
 sort(divisores.begin(),divisores.end());

	  for(int d : divisores){
            int inicial;
            if(y-(n-1)*d>0){
                  if(y-(n-1)*d<=x)inicial=y-(n-1)*d;
                  else continue;
            }
            else { int c=n-1;
              while(y-c*d<=0){
                c--;
              }
               if(y-c*d<=x)inicial=y-c*d;
               else continue;
            }
            if(y/d<=n&&inicial+(n-1)*d>=y){
		   for(int i=0;i<n;i++){
		               cout<<inicial+i*d<<" ";
	           }
		   cout<<endl;
                   break;
    	    }
            else{
                  if(x>=y-(n-1)*d){
                      for(int i=0;i<n;i++){
                          cout<<inicial+i*d<<" ";
                      }
		   cout<<endl;
                  break;
                  }
            }

    }
 } 
  return 0;
}
