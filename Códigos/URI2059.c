#include <stdio.h>
int main()
{int p,j1,j2,r,a;

scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);

if(a){
    if(!r)printf("Jogador 1 ganha!\n");
    else printf("Jogador 2 ganha!\n");
}
else{
    if(r||!p==(j1+j2)%2)printf("Jogador 1 ganha!\n");
    else printf("Jogador 2 ganha!\n");
}

    return 0;
}
