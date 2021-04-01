#include <stdio.h>
#include <math.h>
#include <cstring>
int primo(int n);
int f(int n);
void primenum();
int main(){
    int x;
    
    primenum();

    while(1){
            scanf("%d",&x);
            if(x == 0) break;
            printf("%d\n",f(x)+1);
    }
    return 0;
}

int primo(int n) { 
    int i;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i*i<=n; i+=2) {
        if(n%i == 0) return 0;
    }
    return 1;
}
int primo1[3502];

int f(int n) {
    int r = 0;
    for (int i = 1; i <= n; i++){
        r = (r + primo1[n-i]) % i;
    }
    return r;
}
void primenum(){
     memset(&primo1, 0, sizeof(primo1));
     int j;
     int a = 0;
     for(j = 2; j < 32650; j++){
           if(primo(j))
           {
                          primo1[a] = j;
                          a++;
           }
     }
}

