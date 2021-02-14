#include<stdlib.h>
#include<string.h>
int main()
{
    int n;

    printf("DIGITE O TAMANHO DA PALAVRA...\n");
    scanf("%d",&n);
    char *p;
    p=(char*) malloc(n*sizeof(char)+1);
scanf("%s",p);
printf(" %s\n\n",p);
    criptografia(p,n);
}
void criptografia(char palavra[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        switch(palavra[i])
        {
        case 'a':palavra[i]='j';break;
        case 'b':palavra[i]='k';break;
        case 'c':palavra[i]='l';break;
        case 'd':palavra[i]='m';break;
        case 'e':palavra[i]='n';break;
        case 'f':palavra[i]='o';break;
        case 'g':palavra[i]='p';break;
        case 'h':palavra[i]='q';break;
        case 'i':palavra[i]='r';break;
        case 'j':palavra[i]='s';break;
        case 'k':palavra[i]='t';break;
        case 'l':palavra[i]='u';break;
        case 'm':palavra[i]='v';break;
        case 'n':palavra[i]='w';break;
        case 'o':palavra[i]='x';break;
        case 'p':palavra[i]='y';break;
        case 'q':palavra[i]='z';break;
        case 'r':palavra[i]='a';break;
        case 's':palavra[i]='b';break;
        case 't':palavra[i]='c';break;
        case 'u':palavra[i]='d';break;
        case 'v':palavra[i]='e';break;
        case 'w':palavra[i]='f';break;
        case 'x':palavra[i]='g';break;
        case 'y':palavra[i]='h';break;
        case 'z':palavra[i]='i';break;


        }

    }
printf("%s\n\n",palavra);
}//vet = (int*)malloc(sizeof(int)*10); qual a diferença entre vet = malloc(sizeof(int)*10) o que significa o * longe







