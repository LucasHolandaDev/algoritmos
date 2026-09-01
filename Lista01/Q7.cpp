#include <iostream>

std::string verificarPrimos(int a, int b) {
    std::string primos = "Verdadeiro";
    int n = std::min(a, b);
    for (int i = 2; i <= n; i++) {
        if (a%i == 0 && b%i == 0) {
            primos = "Falso";
            break;
        }
    }
    return primos;
}
int main() {
    int a, b;
    std::cout << "Digite 2 valores: " << std endl;
    if (std::cin >> a >> b) {
    std::cout << verificarPrimos(a, b) << std::endl;
    }
    return 0;
}