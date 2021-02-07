#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( int argc, char** argv)
{
    int i,j;
    struct data
    {
        int a;
        int b;
        int c;
        int d;
    };
    struct data m={1,2,3,4};
    struct data c[50];



    for(i=0; i<50; i++)
    { c[i]=m;

        printf(" %d\n %d\n %d\n %d\n\n",c[i].a,c[i].b,c[i].c,c[i].d);
    }



}
