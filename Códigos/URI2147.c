#include <stdio.h>
#include <time.h>
int main(){
  int m,i;
  char s[10001];
  scanf("%d",&m);
  for(i=0;i<m;i++){  
        scanf(" %s",s);
        printf("%.2lf\n",strlen(s)*0.01);
  }
    return 0;
}