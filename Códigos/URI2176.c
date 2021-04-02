#include <stdio.h>
#include <string.h>
int main(){
    int i,aux=0;
    char s[101];
    scanf("%s",s);
   
    for(i=0;i<strlen(s);i++)
       	aux+=s[i]+48;
    printf("%s",s);
    
    if(aux%2==0)
	printf("%d",0);
    else 
	printf("%d",1);
    printf("\n");
    return 0;
}