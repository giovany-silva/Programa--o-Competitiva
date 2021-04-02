#include <stdio.h>
#include <string.h>
int main()
{
    int j,s=0;
    char p[10];
    for(j=1; j<=3; j++)
    {
        s=0;
        while(1)
        {
            scanf(" %7[^\n]s",p);
            if(p[0]=='c') break;

            if(p[0]=='-')
            {
                if(p[1]=='-')
                {
                    if(p[2]=='-') s+=0;
                    else s+=1;
                }
                else
                {
                    if(p[2]=='-') s+=2;
                    else s+=3;
                }
            }
            else if(p[0]=='*')
            {
                if(p[1]=='-')
                {
                    if(p[2]=='-')s+=4;
                    else s+=5;
                }
                else
                {
                    if(p[2]=='-') s+=6;
                    else s+=7;
                }
            }
        }
        printf("%d\n", s);
    }
    return 0;
}