#include <stdio.h>
#include <stdlib.h>
int triangulo(int v[]);
int main()
{int v[4],i,j;

for(i=0;i<4;i++)scanf("%d",&v[i]);
for(i=0;i<4;i++)
	{
	 for(j=i;j<4;j++)
                  {
                    if(v[i]<v[j])                  
                    {
                       int aux=v[j];v[j]=v[i]; 
                        v[i]=aux;
                    }
                  } 
  
	}


i=0;
while(i<4){
  int aux[3],c=0;
  
  for(j=0;j<4;j++)
		if(j!=i){
                  	aux[c]=v[j]; 
                        c++;   
  		}
  if(triangulo(aux)){
		printf("S\n");
		return 0;
  }

  i++;
 }

printf("N\n");
 return 0;
    
}
  
int triangulo(int v[]){
int i;
if(v[0]+v[1]>v[2]&&v[0]-v[1]<v[2]&&v[0]+v[2]>v[1]&&v[0]-v[2]<v[1]&&v[1]+v[2]>v[0]&&v[1]-v[2]<v[0])
	return 1;

return 0;

}

