#include<stdlib.h>
#include<math.h>
int main()
{
    int A,B,C,M;
    scanf("%d %d %d",&A,&B,&C);
    M=(A+B+abs(A-B))/2;
    printf("%d",M);
    printf(" eh o maior\n");
    return 0;
}
