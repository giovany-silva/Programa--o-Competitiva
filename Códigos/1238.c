#include <stdio.h>
#include <string.h>
int main(){

int n,ta,tb,a,j;

 char p1[51],p2[51],aux[51];

 scanf("%d",&n);

 while(n--){
 	j=0;
     	scanf("%s %s",p1,p2);
	tb=strlen(p2);

	while(p1[j]!='\0'&&p2[j]!='\0'){
		printf("%c%c",p1[j],p2[j]);
		j++;                 
	}

 	while(p1[j]!='\0'){
		printf("%c",p1[j]);

		j++;                 
	}
 	while(j<tb){
		printf("%c",p2[j]);
		j++;                 
	}
	printf("\n");
 } 
    return 0;
}
