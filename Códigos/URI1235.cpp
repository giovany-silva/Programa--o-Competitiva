#include <stdio.h>
#include <string.h>
#include <iostream>    

int main(){
    int n, j,i, l;
    char lin[101];
    
    
    scanf("%d",&n);
    std::cin.getline(lin,0);
    for( i = 0; i < n; i++){
            std::cin.getline(lin,101);
            l = strlen(lin);
            char p[l/2];
            char s[l/2];
            for(j = 0; j < l/2; j++){
                  p[j] = lin[l/2 - j - 1];
                  s[j] = lin[l - j - 1];
            }
            p[l/2] = '\0';
            s[l/2] = '\0';
            printf("%s%s\n",p,s);
    }
    
    return 0;
}