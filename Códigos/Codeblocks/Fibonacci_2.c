
#include<stdlib.h>
int main()
{int i,a,N;
do{scanf("%d",&N);}while(N<=0||N>=46);

    for(i=0;i<N;i++){a=Fibonacci(i);
if(i==N-1){printf("%d\n",a);break;}
printf("%d ",a);}
}
int Fibonacci(int i)
{
    if(i==0) return 0;
    if(i==1)return 1;
    else{return Fibonacci(i-2)+Fibonacci(i-1);

    }


}
