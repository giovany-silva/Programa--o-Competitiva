#include <stdio.h>
int main()
{double v,d;

while(1){
    if(scanf("%lf %lf",&v,&d)==EOF)
		return 0;
    printf("ALTURA = %.2lf\nAREA = %.2lf\n",v/((d/2.0*d/2.0)*3.14),(d/2.0*d/2.0)*3.14);
    
}
    

    return 0;
}
