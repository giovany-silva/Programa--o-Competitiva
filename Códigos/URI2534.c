#include<stdio.h>
#include<malloc.h>
int *bolha(int *vetor, int n);
int main () 
{
  int c, n, i;
  while (1)
  {
     
      if (scanf ("%d %d", &n, &c) == EOF)break;
      int *v=malloc(sizeof(int)*n);
      for (i = 0; i < n; i++)scanf ("%d", &v[i]);
      v=bolha(v,n);     
      for (i = 0; i < c; i++)
              {
                    scanf ("%d", &n);
                    printf ("%d\n", v[n - 1]);
              }
    
      
  }
  
return 0;

}
int *bolha(int *vetor, int n){
   
    int i = 0, j = 0, aux = 0;      
 
    for(i = 0; i < n; i++){
     
        for(j = i + 1; j < n; j++){
       
            if (vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
  return vetor;
}