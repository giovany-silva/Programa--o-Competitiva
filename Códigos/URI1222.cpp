#include <string>
#include <iostream>
int main() {
    std::string word;    
    int n, l, linhas;

 unsigned int c1, chara;
    while (std::cin >> n >> l >> c1) {
        linhas = 1;
        chara = 0;

        while (n--) {
            std::cin >> word;
            if (chara + word.length() <= c1) {
                chara += word.length() + 1;
            } else {
                chara = word.length() + 1;
                linhas++;
            }
        }

        if (linhas % l != 0) {
            std::cout << linhas / l + 1 << std::endl;
        } else {
            std::cout << linhas / l << std::endl;
        }
    }
    return 0;
}