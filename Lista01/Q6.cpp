#include <iostream>

std::string verificarPrimo(int n) {
    int divs = 0;
    std::string resp = "";
    for (int i = 1; i <= n; i++){
        if(n%i == 0){
            divs++;
        }
    }
    if (divs == 2) {
        resp = "Verdadeiro";
    } else {
        resp = "Falso";
    }
    return resp;
}

int main(){
    int n;
    std::cout << "Digite um número: " << std::endl;
    if (std::cin >> n) {
    std::cout << verificarPrimo(n) << std::endl;
}   
    return 0;
}