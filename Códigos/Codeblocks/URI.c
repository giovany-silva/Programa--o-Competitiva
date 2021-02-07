#include<stdlib.h>
#include<stdio.h>
double verifica(double c,int *cont,double media);
int main()
{
    double a,b,c,d,e,f,media;
int cont1;

media=0;
cont1=0;
scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
while(((a<0&&b<0)&&(c<0&&d<0))&&(e<0&&f<0)){scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
}

media=verifica(a,&cont1,media);//toda vez que retorno algum valor ele deve ir para alguma variavel...
media=verifica(b,&cont1,media);
media=verifica(c,&cont1,media);
media=verifica(d,&cont1,media);
media=verifica(e,&cont1,media);
media=verifica(f,&cont1,media);
media=media/ cont1;
printf("%d valores positivos""\n%.1lf\n",cont1,media);
}
double verifica(double c,int *cont,double media)
{
    if(c>0){
            *cont=*cont+1;
         media=media+c;
            }
return media;
}
