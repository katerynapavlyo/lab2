#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;
    if (a >= 3 && a <= 9 && a >= b && a <= c) {
        std::cout << "Number a belongs to set Z." << std::endl;
    } 
    else {
        std::cout << "Number a DOES NOT belong to set Z." << std::endl;
    }
    return 0;
}