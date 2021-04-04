#include <stdio.h>
void verifica(int a,int *cont);
int main()
{
   int a,b,c,d,e,cont;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    cont=0;
    
    verifica(a,&cont);
    verifica(b,&cont);
    verifica(c,&cont);
    verifica(d,&cont);
    verifica(e,&cont);
            
    
    
    
printf("%d valores pares\n",cont);}

void verifica(int a,int *cont)
{
    if(a%2==0){
	*cont=*cont+1;
    }

    
}
