#include<stdlib.h>
void verifica(int a,int X);
int main()
{
    int X,a;
    scanf("%d",&X);
    while(X<1||X>1000){
        scanf("%d",&X);
    }

    if(X%2==0){
	verifica(1,X);
    }
    else{
        verifica(0,X);
    }

}
void verifica(int a,int X){
    int s;
    s=1;
      while(s<=X-a){
        printf("%d\n",s);
        s=s+2;
    }
}
