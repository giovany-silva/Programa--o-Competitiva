#include<stdio.h>
#include<stdlib.h>
char le_string(char s[],int n);
int main()
{
    int n;
    printf("DIGITE UM TAMANHO...\n");
    scanf("%d\n",&n);
    char *s=malloc(n*sizeof(char)+1);
    s[n]='\0';
    scanf("%s",s);
le_string(s,n);
    printf("%s\n",s);

}
char le_string(char s[],int n)
{char p[n];

    if(n==0)
    {
        return s[n];
    }
    else
    {
        strcpy(p[n],le_string(s[n-1],n-1));
    }

}



