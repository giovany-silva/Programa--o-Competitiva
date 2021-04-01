#include <stdio.h>
#include <malloc.h>
void quick(int vet[], int esq, int dir);
int main ()
{int q,n,i,ia,b,c=1;
int *v;
while(1)
        {   scanf("%d %d",&q,&n);
            if(!q&&!n)break;
            ia=0;
            printf("CASE# %d:\n",c);
        v=(int*)malloc(sizeof(int)*q);
            while(q--)
            {     scanf("%d",&i);
                  v[ia++]=i;
            }
            quick(v,0,ia-1);
            while(n--)
            {
                    scanf("%d",&i);
                 q=b=0;
                 while(q<ia)
                 {
                     if(v[q]==i){
                         b=1;break;
                     }
                     else q++;
                 }
                printf("%d ",i); if(b)printf("found at %d\n",q+1); 
                else printf("not found\n");                
            }
            c++;
          }
 

   
 
  
  return 0;
}
void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;         
    for(i=esq+1;i<=dir;i++){        
        j = i;                      
        if(vet[j] < vet[pivo]){     
            ch = vet[j];               
            while(j > pivo){           
                vet[j] = vet[j-1];      
                j--;                    
            }
            vet[j] = ch;               
            pivo++;                    
        }
    }
    if(pivo-1 >= esq){              
        quick(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){              
        quick(vet,pivo+1,dir);      
    }
 }