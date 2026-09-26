// Exercise 2.4
// Calculate the product of three integers
#include <iostream>

int main() {
    std::cout << "Enter three integers: ";
    int x{0};
    int y{0};
    int z{0};
    std::cin >> x >> y >> z;
    int result{x * y * z};
    std::cout << "The product is " << result << std::endl;
    return 0;
}
