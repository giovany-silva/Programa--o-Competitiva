#include<stdlib.h>
int main()
{
    float N;
    scanf("%f",&N);
    if(N<=25&&N>=0)
    		printf("Intervalo [0,25]\n");
    else if(N>25&&N<=50){
		printf("Intervalo (25,50]\n");
    }
    else if(N>50&&N<=75){
		printf("Intervalo (50,75]\n");
    }
    else if(N<=100&&N>75){
		printf("Intervalo (75,100]\n");
    }
    else{
		printf("Fora de intervalo\n");
    }
return 0;
}
