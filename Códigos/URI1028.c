#include <stdio.h>
int mdc(int a,int b);
int main()
{
int a,b,c,i;
scanf("%d",&c);

for(i=0;i<c;i++){
	scanf("%d %d",&a,&b);
	if(a<b){
	      int aux=b; 
	      b=a;
	      a=aux;
        }
	printf("%d\n",mdc(a,b));
}

return 0;
    
}
int mdc(int a,int b){

 if(a==1||b==1)
		return 1;
 int aux=1;
 while(a%b!=0){
 	aux=a;
        a=b; 
        b=aux%b;
 }
return b;

}