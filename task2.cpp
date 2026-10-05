#include <iostream>
#include <cmath>
int main() {
    double x, y, z;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    if (y < x) {
        z = y * std::exp(x);
    } 
    else if (y == x) {
        z = y * x;
    } 
    else {
        z = x * std::exp(y);
    }

    std::cout << "Result z = " << z << std::endl;
    return 0;
}
