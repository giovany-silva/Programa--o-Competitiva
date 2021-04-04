#include<stdlib.h>
int main()
{
    int s;
    scanf("%d",&s);
    switch(s)
    {
   	 case 61:{
		printf("Brasilia\n");
	}
	break;
        case 71:{
		printf("Salvador\n");
	}
	break;
        case 11:{
		printf("Sao Paulo\n");
	}
	break;
        case 21:{
		printf("Rio de Janeiro\n");
	}
	break;
        case 32:{
		printf("Juiz de Fora\n");
	}
	break;
        case 19:{
		printf("Campinas\n");
	}
	break;
        case 27:{
		printf("Vitoria\n");
	}
	break;
        case 31:{
		printf("Belo Horizonte\n");
	}
	break;
    }
	if(((s!=61&&s!=71)&&(s!=11&&s!=21))&&(s!=32&&s!=19&&(s!=27&&s!=31))){
    		printf("DDD nao cadastrado\n");
	}
}
