#include <stdio.h>
#include <string.h>
int main()
{int c1=1;
    char v1[33],v2[33];
    while(1)
    {
        int c2=0,i=0,u,j,cont=0;
        if(scanf(" %s %s",v1,v2)==EOF)
            break;
        while(i<=strlen(v2)-strlen(v1))
        {
            int b=0;
            for(j=0; j<strlen(v1); j++)
            {
                if(v2[i+j]==v1[j])
                    continue;
                b=1;break;
            }
            
                if(!b)
                {
                    u=i;
                    cont++;
                }
                i++;
        }

        if(cont>0)
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",c1,cont,u+1);

        else
            printf("Caso #%d:\nNao existe subsequencia\n\n",c1);
c1++;
    }

    return 0;
}
