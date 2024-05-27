#include <iostream>
#include <cmath>

int main() {
    long double time = 3.0 * 30.0 * 24.0 * 60.0 * 60.0;
    long double m_min;
    long double v = 300000.0;
    long double n;

    std::cout << "Введите длину пароля n: ";
    std::cin >> n;

    m_min = pow(v * time, 1 / n);

    std::cout << "Минимальная мощность множества: " << m_min;
}