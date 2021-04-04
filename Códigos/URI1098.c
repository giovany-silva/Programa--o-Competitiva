#include<stdlib.h>
#include<stdio.h>
void verifica();
int main()
{
    verifica();
    return 0;
}
void verifica()
{
    int i;

    for(i=0; i<11; i++)
    {
        if(i==0)
        {
            printf("I=%d J=%d\n",0,1);
            printf("I=%d J=%d\n",0,2);
            printf("I=%d J=%d\n",0,3);
        }
        else if(i==10)
        {
            printf("I=%d J=%d\n",2,1+2);
            printf("I=%d J=%d\n",2,2+2);
            printf("I=%d J=%d\n",2,3+2);
        }
        else if(i==5)
        {
            printf("I=%d J=%d\n",1,1+1);
            printf("I=%d J=%d\n",1,2+1);
            printf("I=%d J=%d\n",1,3+1);
        }
       else{ printf("I=%.1f J=%.1f\n",0.2*i,1+0.2*i);
        printf("I=%.1f J=%.1f\n",0.2*i,2+0.2*i);
        printf("I=%.1f J=%.1f\n",0.2*i,3+0.2*i);}
    }
}
