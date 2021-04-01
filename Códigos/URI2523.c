#include <stdio.h>
int main()
{  char s[27];
    int t,n,i;
    while(1){
        if(scanf("%s",s)==EOF)break;
      scanf("%d",&n);
        for(i=0;i<n;i++){scanf("%d",&t);printf("%c",s[t-1]);}
printf("\n");
    }
   return 0;
}
