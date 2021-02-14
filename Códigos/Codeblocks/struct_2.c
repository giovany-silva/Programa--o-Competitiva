#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( int argc, char** argv)
{
    int i,j;
    struct data   //uma struct pode conter varios dados diferentes,e esses dados podem ser repassados para diferentes variavaeis,vetores,matrizes.
    {
        int a;//devemos declarar uma struct com o seu tipo(nós que damos o nome),e além disso o tipo vai ser dado pelo conteudo que queremos colocar lá
        int b;//Em geral ,é bom declarar fora da main,para que as funções tenham acesso.
        int c;
        int d;
    };
    struct data m={1,2,3,4};//poderia ser tbm: m.a=1; m.b=2;m.c=3;m.d=4;
    struct data c[50];


//aqui estamos atribuindo os valores de entrada da struct m a todas structs do vetor c;
    for(i=0; i<50; i++)
    { c[i]=m;

        printf(" %d\n %d\n %d\n %d\n\n",c[i].a,c[i].b,c[i].c,c[i].d);
    }



}
