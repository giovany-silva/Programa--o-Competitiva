
#include <stdio.h>
void imprime_matriz(int d);
int main()
{int d;

while(1){
	if(scanf("%d",&d)==EOF)break;
	imprime_matriz(d);

}    

    
    return 0;
    
}
void imprime_matriz(int d){
int m[d][d],ci=0,i,j,k;
	for(k=0;k<d;k++){

		for(i=0;i<d;i++)for(j=0;j<d;j++){
			if(i+j==d-1&&d!=1)m[i][j]=2;

			else if(i==j)m[i][j]=1; 
			else m[i][j]=3;  
		}		     
		ci++;

	}       
    for(i=0; i<d; i++)
            {
                for(j=0; j<d; j++)
                {
                    printf("%d",m[i][j]);
                }
                printf("\n");
            }
 
}