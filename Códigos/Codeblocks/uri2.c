#include <stdio.h>

int main(){
int  i;
    float soma =0;
    for(i = 0; i <20; i++)
        {
            soma += (1+2*i)/(float)pow(2,i);
    }
    printf("%.2f\n",soma);
    return 0;
}
