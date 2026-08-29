#include <iostream>

int quantPostes(int m, int p) {
    int postes = 0, distancia = 0;
    while(distancia <= m) {
        postes +=1;
        distancia +=p;
    }
    if(distancia > m) {
        postes +=1;
    }
    return postes;
}

int distFinal(int m, int p) {
    int distF;
        if(m%p == 0) {
            distF = p;
        }
        else {
            distF = m - ((m/p)*p);
        }

    return distF;
}

int main() {
int m; //distancia total da rua em Metros;
int p; //distancia entre 2 postes na rua em Metros;

std::cout << "Digite a distancia da rua e a disatncia dos postes, respectivamente: " << std::endl;
std::cin >> m >> p;
printf("Serão colocados um total de %d na rua. \n", quantPostes(m, p));
printf("A distância dos últimos 2 postes será de %dm \n", distFinal(m, p));

}
// saida: quantidfade de postes na rua
// saida: disctancia entre os 2 ultimos postes (sempre tem 1 poste no ponto 0 e outro no ponto final)
// P-------------------------------------------P --> assim;