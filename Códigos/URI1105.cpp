#include <stdio.h>

int main(){
    int i,b, n, d, c, v, test;
    
    while(1){
        scanf("%d %d", &b, &n);
        if(b == 0 && n == 0) break;
        
        test = 0;
        int r[b];
          
        for(i = 1; i <= b; i++)
            scanf("%d",&r[i]);
        
        for(i = 1; i <= n; i++){
            scanf("%d %d %d", &d, &c, &v);
            
            r[d] -= v;
            r[c] += v;
        }
        
        for(i = 1; i <= b; i++){
            if(r[i] < 0){
                test = 1;
                break;
            }
        }
        
        if(test == 1) printf("N\n");
        else printf("S\n");
   }
   return 0;
}