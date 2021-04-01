#include <stdio.h>

int main()
{
      int vet[5],i,a,b=1;
      for(i=0;i<5;i++)scanf("%d",&vet[i]);
      for(i=0;i<5;i++){
     scanf("%d",&a);
       if(a==vet[i]){b=0;break;}
      }
     if(b)printf("Y\n");
     else  printf("N\n");

    return 0;
}
