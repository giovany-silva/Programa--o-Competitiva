#include <stdio.h>
int main()
{    int m,i,h,M,o;
 scanf("%d",&m);
 for(i=0;i<m;i++)
     {
         scanf("%d %d %d",&h,&M,&o);
        if(o) printf("%.2d:%.2d - A porta abriu!\n",h,M);
        else printf("%.2d:%.2d - A porta fechou!\n",h,M);
     }
 
 
    return 0;
}