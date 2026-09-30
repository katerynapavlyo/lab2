#include <iostream>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c;
    std::cout << "Введіть a: ";
    std::cin >> a;

    std::cout << "Введіть b: ";
    std::cin >> b;

    std::cout << "Введіть c: ";
    std::cin >> c;
    if (a >= 3 && a <= 9 && a >= b && a <= c) {
        std::cout << "Число a належить множині Z." << std::endl;
    } else {
        std::cout << "Число a НЕ належить множині Z." << std::endl;
    }
    return 0;
}