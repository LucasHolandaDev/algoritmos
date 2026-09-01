#include <iostream>

int countDivisores(int n) {
    int divs = 0;
    for(int i = 1; i <= n; i++) {
        if (n%i == 0) {
            divs++;
        }
    }
    return divs;
}

int main() {
    bool continuar = true;
    while (continuar) {
    int n;
    int resp;
    std::cout << "Digite um número: " << std::endl;
    std::cin >> n;
    std::cout << "O número " << n << " possue " << countDivisores(n) << " divisores inteiros positivos" << std::endl;
    std::cout << "Continuar? Digite 1 ou 0" << std::endl;
    std::cin >> resp;
    if (resp == 1){
        continuar = true;
    } else {
        continuar = false;
        break;
    }
}
    return 0;
}