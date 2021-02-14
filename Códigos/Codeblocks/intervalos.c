#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    float c;
    scanf("%d %d",&a,&b);
    switch(a)
    {
        case 1 :c=b*4;
        break;
        case 2 :c=b*4.5;
        break;
        case 3 :c=b*5;
        break;
        case 4: c=b*2;
        break;
        case 5:c=b*1.5;
        break;
   }

    printf("Total: R$ %.2f\n",c);
return 0;
}
