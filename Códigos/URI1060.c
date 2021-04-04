#include <stdio.h>
void verifica(int a,int *cont);
int main()
{
   double a,b,c,d,e,f;
   int cont;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    while(((a==0&&b==0)&&(c==0&&d==0))&&(e==0&&f==0))
    {
        
        scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
        
    }
    cont=0;
    
    verifica(a,&cont);
    verifica(b,&cont);
        verifica(c,&cont);
            verifica(d,&cont);
            verifica(e,&cont);
            verifica(f,&cont);
            
    
    
    
printf("%ld valores positivos\n",cont);}

void verifica(int a,int *cont)
{
    if(a>=1){
	*cont=*cont+1;
    }

    
}
