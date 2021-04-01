int movimentos(int x1 ,int y1,int x2 ,int y2);
#include <stdio.h>
int main()
{
    int x1,x2,y1,y2;
    
    while(1)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(!x1&&!y1&&!x2&&!y2)break;
    printf("%d\n",movimentos(x1,y1,x2,y2));    
    }
    
    
    return 0;
}
int movimentos(int x1 ,int y1,int x2 ,int y2)
{
    if(x1==x2&&y1==y2)return 0;
    if(x1==x2||y1==y2||(x2-x1==y2-y1)||(x2-x1==y1-y2))return 1;
    else return 2;
    
}
 