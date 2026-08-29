#include <iostream>

int calcPerimetro(int l1, int l2) {
    int perimetro = (l1 + l2)*2;
    return perimetro;
}

int main() {
    int a, b;
    std::cout << "Digite as medidas do seu retângulo: " << std::endl;
    std::cin >> a >> b;
    std::cout << "O perimetro é igual a:" << calcPerimetro(a, b) << std::endl;

}