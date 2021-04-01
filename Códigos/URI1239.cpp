#include <stdio.h>
#include <iostream>
int main(){
    int n, it, i;
    char text[100];
    while(std::cin.getline(text,100)){
                i = 0;
                n = 0;
                it = 0;
     while(text[i] != '\0'){
                if(text[i] == '*'){
                        if(n == 0){
                                    printf("<b>");
                                    n= 1;
                        }
                        else {
                             printf("</b>");
                             n = 0;
                        }
                }else if(text[i] == '_'){
                        if(it == 0){
                                    printf("<i>");
                                    it = 1;
                        }
                        else {
                             printf("</i>");
                             it = 0;
                        }
                }else{
                      printf("%c", text[i]);
                }
                i++;
     }
     printf("\n");
    }
    
    return 0;
}