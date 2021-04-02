#include <stdio.h>

int main(){
float m[12][12],res=0;
int i,j;
char c;
scanf("%c",&c);

for(i=0;i<12;i++)
	for(j=0;j<12;j++){
		scanf("%f",&m[i][j]);
        	if(j<i)
			res=res+m[i][j];        
    	}

switch(c)
{
    case 'S':
	printf("%.1lf\n",res);
    break;
    case 'M':
	printf("%.1lf\n",res/66.0);
    break;
}
return 0;
    
}
