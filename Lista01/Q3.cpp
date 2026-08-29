#include <iostream>

double calcArea(double diametro) {
    double pi = 3.14159;
    double area;

    double r = diametro/2;
    area = pi*(r*r);
    return area;
}

int main() {
    double diametro;

    std::cout << "Digite o diametro do seu circulo: " << std::endl;
    std::cin >> diametro;
    printf("A area do seu circulo é: %.5f", calcArea(diametro));
}