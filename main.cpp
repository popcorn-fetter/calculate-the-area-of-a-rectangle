// main.cpp
#include <iostream>
#include "rectangle.h"

int main() {
    double length, width;
    
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;

    Rectangle rectangle(length, width);
    
    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
