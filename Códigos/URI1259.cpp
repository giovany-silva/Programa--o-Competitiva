#include <stdlib.h>
#include <iostream>
#include <malloc.h>
using namespace std;
#define T 1000000
int compare (const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int main() {
  int *p=(int*)malloc(T*sizeof(int)),*i=(int*)malloc(T*sizeof(int)),n,ii=0,pp=0,v;
  cin>>n;
  while(n--)
  {
      cin>>v;
      if(v%2){i[ii]=v;ii++;}
      else {p[pp]=v;pp++;}

  }
      qsort(i,ii,sizeof(int),compare);  
      qsort(p,pp,sizeof(int),compare);
      int aux;
      ii-=1;
    while(aux<pp){printf("%d\n",p[aux]);aux++;}
    while(ii>=0){printf("%d\n",i[ii]);ii--;}
	return 0;
}