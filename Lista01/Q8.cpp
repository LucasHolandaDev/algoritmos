#include <iostream>

int mdc(int x, int y) {
    int resto;
    int a = std::max(x, y);
    int b = std::min(x, y);
    while(b != 0) {
        resto = a%b;
        a = b;
        b = resto;
    }
    return a;
    }
int main() {
    int v1, v2;
    std::cout << "Digite 2 valores: " << std::endl;
    if (std::cin >> v1 >> v2) {
        std::cout << mdc(v1, v2) << std::endl;
    }
    return 0;
}