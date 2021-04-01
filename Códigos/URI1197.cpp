#include <stdio.h>
#include <iostream>

int main(){
    int k, w;
    
    while(std::cin >> k){
                    std::cin >> w;
                    printf("%d\n", k*(2*w));
    }
    return 0;
}