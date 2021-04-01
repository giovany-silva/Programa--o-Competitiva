#include<stdlib.h>
#include<stdio.h>
long long int fatorial(long long int num);
int main()
{
 long long int a,b;
while(1){if(scanf("%lld %lld",&a,&b)==EOF)return 0;
 printf("%lld\n",fatorial(a)+fatorial(b));
}
}
long long int fatorial(long long int num) {
    if (num >= 0) {
        long long int fat = 1;
        while (num > 0) {
            fat *= num;
            num--;
        }
        return fat;
    } else {
        return -1;
    }
}
