#include <stdio.h>
int main()
{
    int x, c, i, j, n = 0, m = 0;
    scanf("%d%d", &x, &c);
    int b[x][c];
    for(i=0; i<x; i++)
        for(j=0; j<c; j++)
            scanf("%d", &b[i][j]);
i=1;
    while(i<x-1)
    {
        for(j=1; j<c-1; j++)
        {
            if(b[i][j]==42)
                if(b[i-1][j-1]==7 && b[i-1][j]==7 && b[i-1][j+1]==7)
                    if(b[i][j-1]==7 &&b[i][j+1]==7)
                        if(b[i+1][j-1]==7 && b[i+1][j]==7 && b[i+1][j+1]==7)
                        {
                            
                            n = i+1;
                            m = j+1;
                        }
        }
    i++;
        
    }
    printf("%d %d\n", n, m);
    return 0;
}


