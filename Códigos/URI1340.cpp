#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,c,i,b;
bool f,fp,p;

queue<int>fila;

priority_queue<int>fila_p;

stack<int>pilha;

while(scanf(" %d",&n)!=EOF){

	f=fp=p=true;

	for(i=0;i<n;++i){
		scanf("%d %d",&c,&b);

             if(c==2){


          if(b!=fila.front())f=false;

          if(b!=fila_p.top())fp=false;
          
          if(b!=pilha.top())p=false;

          fila.pop();
          fila_p.pop();
          pilha.pop(); 



         }	 
         else{
                 fila.push(b);
                 fila_p.push(b);
                 pilha.push(b);
             }
 
   
 
       }

      
  if(f&&!fp&&!p)cout<<"queue"<<endl;

  else if(!f&&fp&&!p)cout<<"priority queue"<<endl;

  else if(!f&&!fp&&p)cout<<"stack"<<endl;

  else if(!f&&!fp&&!p)cout<<"impossible"<<endl;
  
  else cout<<"not sure"<<endl;

while(!fila.empty()&&!pilha.empty()&&!fila_p.empty()){

fila.pop();
pilha.pop();
fila_p.pop();
}
}


return 0;
}