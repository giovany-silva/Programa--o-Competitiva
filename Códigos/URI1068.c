#include <stack>//obs importante o atalaho x[p++] ou algo do tipo nao passa no URI
#include <iostream>
using namespace std;
int main()
{   stack<char> pilha;
   char a[1001];
   int i,e;
   while(cin>>a)
   { i=0;e=0;
       while(a[i]!='\0')
       {
            if(a[i]=='(')pilha.push('(');
            else if(a[i]==')')
            {
                if(pilha.empty()){e=1;break;}
                else pilha.pop();
            }

        i++;
       }
       
      if(e||!pilha.empty())
      {while(!pilha.empty())pilha.pop();
          cout<<"incorrect\n";
      }
      else cout<<"correct\n";
      
   }

    return 0;
}
