#include <stdio.h>
#include <string.h>
int main()
{   int n,i;char s[35];
s[35]='\0';
strcpy(s,"LIFE IS NOT A PROBLEM TO BE SOLVED");	 

  
scanf("%d",&n);
   for(i=0;i<n;i++)
	 printf("%c",s[i]);
	printf("\n");
  return 0;
}