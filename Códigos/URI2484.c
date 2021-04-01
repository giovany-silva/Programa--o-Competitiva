#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main()
{int x,i,a,b,n,j;
char s[101],c;
 int num;
  
  
while(1)
{n=0;
if(scanf("%s",s)==EOF)break;
a=strlen(s);
for(i=0;i<a;i++)
    {for(j=0;j<n;j++)printf(" ");
            for(j=0;j<a-n;j++)
            {if(j==a-n-1)printf("%c",s[j]);
            else printf("%c ",s[j]);  
            }
        printf("\n");
    n++;
    }
 printf("\n");
}
    

    return 0;
}


