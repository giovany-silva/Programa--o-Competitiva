#include <stdio.h>
#include <string.h>
int main(){
char s[1001],s1[1001];
int n,b,t,t1;
scanf("%d",&n);
    while(n--)
    {b=1;
     scanf("%s %s",s,s1);
     t1=strlen(s1);
     t=strlen(s);
     if(t1>t)b=0;
     else 
     {t1--;t--;
         while(t1>=0)
         {
             if(s1[t1]!=s[t]){b=0;break;}
         
             t1--;t--;
         }
         
     }
     if(b)printf("encaixa\n");
     else printf("nao encaixa\n");
    }
    
    return 0;
}