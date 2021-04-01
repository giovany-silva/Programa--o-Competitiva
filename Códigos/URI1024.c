#include <stdio.h>
int main()
{
 int i,n,c1,j;
 scanf("%d",&n);
 char m[1001];
 for(i=0;i<n;i++)
  {
      scanf(" %[^\n]s",m);
      int c=strlen(m);
    char aux[c+1];
    aux[c]='\0';
    c1=0;
    for(j=c-1;j>=0;j--)
    {if(m[j]>='a' && m[j]<='z'||m[j]>='A' && m[j]<='Z')aux[c1]=m[j]+3;
     else aux[c1]=m[j];
             c1++;
    }

    for(j=strlen(aux)/2;j<strlen(aux);j++)aux[j]--;
    printf("%s\n",aux);
  }


    return 0;
}
