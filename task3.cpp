#include <iostream>
#include <cmath>
int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Enter A (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter B (x2 y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Enter C (x3 y3): ";
    std::cin >> x3 >> y3;

    double side1 = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    double side2 = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2));
    double side3 = std::sqrt(std::pow(x1 - x3, 2) + std::pow(y1 - y3, 2));

    if (side1 == side2 || side2 == side3 || side3 == side1) {
        std::cout << "The triangle is isosceles." << std::endl;
    } 
    else {
        std::cout << "The triangle is NOT isosceles." << std::endl;
    }

    return 0;
}