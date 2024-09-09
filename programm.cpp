#include <iostream>

int main() {
    double width, height, area;

    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;

    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> height;

    area = width * height;

    std::cout << "Площадь прямоугольника равна: " << area << " квадратным единицам." << std::endl;

    return 0;
}
