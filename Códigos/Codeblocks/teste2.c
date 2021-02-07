#include<stdlib.h>
#include<stdio.h>
int main()
{
  char g[10],a[10];
        scanf("%s %s",&g,&a);
        strcpy(g,"casa");
        strcat(g,a);
        printf("%s",g);
}
