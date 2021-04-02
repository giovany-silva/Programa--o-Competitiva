#include <stdio.h>
#include <math.h>
int main()
 {
       double xf,yf,xi,yi,vi,r1,r2;
while(1){
	if(scanf("%lf%lf%lf%lf", &xi, &yi, &xf, &yf)== EOF)
		return 0;
        scanf("%lf%lf%lf", &vi, &r1, &r2);
    	double d=sqrt((xi-xf)*(xi-xf)+(yi-yf)*(yi-yf))+vi*1.5;
    	double a=r1+r2 ;
    	
	if(a>=d)
		printf("Y\n");
    	else printf("N\n");
}
    return 0;    
}