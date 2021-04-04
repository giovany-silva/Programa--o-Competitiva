#include<stdlib.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A<B&&B<C)
    {
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",A,B,C,A,B,C);
    }
    else if(A<C&&C<B)
    {
        printf("%d\n%d\n%d\n",A,C,B);
        printf("\n%d\n%d\n%d\n",A,B,C);
    }
    else if(B<A&&A<C)
    {
        printf("%d\n%d\n%d\n",B,A,C);
        printf("\n%d\n%d\n%d\n",A,B,C);
    }
    else if(B<C&&C<A)
    {
        printf("%d\n%d\n%d\n",B,C,A);
        printf("\n%d\n%d\n%d\n",A,B,C);
    }
    else if(C<A&&A<B)
    {
        printf("%d\n%d\n%d\n",C,A,B);
        printf("\n%d\n%d\n%d\n",A,B,C);
    }
    else
    {
        printf("%d\n%d\n%d\n",C,B,A);
        printf("\n%d\n%d\n%d\n",A,B,C);
    }
    return 0;
}
