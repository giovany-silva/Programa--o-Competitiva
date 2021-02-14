#include<stdlib.h>
#include<stdio.h>
int main()
{
    char *p;
    int n;
    scanf("%d",&n);
     p =malloc(n*sizeof(char));


    scanf("%s",*p);
    printf("\n%s\n",*p);
free(p);

}
