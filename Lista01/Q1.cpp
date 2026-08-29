#include <iostream>

long long soma(long a, long b) {
    long r = a + b;
    return r;
}
int main() {
    long a, b;
    std::cin >> a >> b;
    long s = soma(a, b);
    std::cout << s << std::endl;
    return 0;
}