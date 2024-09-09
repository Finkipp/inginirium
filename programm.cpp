#include <iostream>

int main() {
    double width, height, area;

    std::cout << "Введите ширину прямоугольника: ";
    std::cin >> width;

    // Проверяем, чтобы ширина была больше нуля
    while (width <= 0) {
        std::cout << "Ширина должна быть больше 0. Пожалуйста, введите допустимую ширину: ";
        std::cin >> width;
    }

    std::cout << "Введите высоту прямоугольника: ";
    std::cin >> height;

    // Проверяем, чтобы высота была больше нуля
    while (height <= 0) {
        std::cout << "Высота должна быть больше 0. Пожалуйста, введите допустимый рост: ";
        std::cin >> height;
    }

    area = width * height;

    std::cout << "Площадь прямоугольника равна: " << area << " квадратным единицам." << std::endl;

    return 0;
}
