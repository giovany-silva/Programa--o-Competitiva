#include <stdio.h>

int main(){
int  i;
    float soma =0;
    for(i = 1; i <= 100; i++)
        {
            soma += 1/(float)i;
    }
    printf("%.2f\n",soma);
    return 0;
}
