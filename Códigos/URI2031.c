#include <stdio.h>
int main(){
int i,d;
char j1[7],j2[7];
scanf("%d",&d);
     for(i=0;i<d;i++){
		scanf(" %s %s",&j1,&j2);
    		if(j1[0]=='a'&&j2[0]=='p'||strcmp(j1,"pedra")==0&&strcmp(j2,"papel")==0)
			printf("Jogador 1 venceu\n");           
    		else if(strcmp(j1,"papel")==0&&strcmp(j2,"papel")==0)
			printf("Ambos venceram\n");
    		else if(strcmp(j1,"pedra")==0&&strcmp(j2,"pedra")==0)
			printf("Sem ganhador\n");
    		else if(j1[0]=='a'&&j2[0]=='a')
			printf("Aniquilacao mutua\n");
    		else 
			printf("Jogador 2 venceu\n");
     }
    return 0;
}
