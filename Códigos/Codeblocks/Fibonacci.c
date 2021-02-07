#include<stdlib.h>
int main()
{int i,a;


    for(i=0;i<13;i++){a=Fibonacci(i);
printf("\n%d\n",a);}
}
int Fibonacci(int i)
{
    if(i==0) return 0;
    if(i==1)return 1;
    else{return Fibonacci(i-2)+Fibonacci(i-1);

    }


}
