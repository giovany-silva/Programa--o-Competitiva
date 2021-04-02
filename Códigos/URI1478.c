
#include <stdio.h>
void imprime_matriz(int d);
int main()
{int d;
scanf("%d",&d);
while(d!=0)
   {     
   
   imprime_matriz(d);
 scanf("%d",&d);   
}while(d!=0);
    
    return 0;
    
}
void imprime_matriz(int d){
int m[d][d],ci=0,i,j,k;
for(k=0;k<d;k++){
	for(i=0;i<d;i++)
		for(j=0;j<d;j++)
			if(i-j==ci||j-i==ci)m[i][j]=ci+1;
      
	ci++;

}       
    for(i=0; i<d; i++)
            {
                for(j=0; j<d; j++)
                {
                    if(j==0)printf("%3d",m[i][j]);
                    else printf(" %3d",m[i][j]);
                }
                printf("\n");
            }
            printf("\n");
}