#include<stdlib.h>
#include<stdio.h>

int main(){
int N,i,f;
	do{
		scanf("%d",&N);
	}
	while(N<=0||N>=13);
		f=1;
	for(i=2;i<=N;i++)
		f=i*f;
	printf("%d\n",f);
return 0;
}
