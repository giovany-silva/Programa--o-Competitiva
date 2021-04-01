#include <stdio.h>
int main(){

int a,b,n;


while(1){
	if(scanf("%d",&n)==EOF)break;
	scanf("%d %d",&a,&b);

	if(a+b<=n)printf("Farei hoje!\n");
	else printf("Deixa para amanha!\n");
    
}
    

    return 0;
}


