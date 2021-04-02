#include <stdio.h>
#include <stdlib.h>
int triangulo(int v[]);
int main(){

  long long int a;

  scanf("%lld",&a);
 
  while(a>0){
    printf("%d",a%10);
    a/=10;
  }
  printf("\n");

return 0;

}

