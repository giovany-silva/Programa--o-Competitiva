#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( int argc, char** argv)
{

int i,j,N;
    struct cadastro
    {
        char nome[10];
        int idade;
        double peso;
        float altura;

    };

printf("\nPLEASE DIGITE THE  NUMBER OF STUDENTS...\n");
scanf("%d",&N);
struct cadastro m[N][1];
for(i=0;i<N;i++)
    {

for(j=0;j<1;j++)
    {printf("PLEASE DIGIT YOUR NAME AND AGE ,AFTER YOUR WEIGHT AND HEIGHT...\n\n");
    scanf(" %s %d %lf %f",&m[i][j].nome,&m[i][j].idade,&m[i][j].peso,&m[i][j].altura);


    }
    }



for(i=0;i<N;i++)
    {

for(j=0;j<1;j++)
    {
    printf("NAME: %s \n\n AGE: %d\n\nWEIGHT : %lf\n\n HEIGHT :%f\n\n",
       m[i][j].nome,m[i][j].idade,m[i][j].peso,
       m[i][j].altura);


    }
    }

}
