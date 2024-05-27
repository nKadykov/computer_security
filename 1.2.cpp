#include <iostream>
#include <cmath>

int main() {
    int m = 26;
    long long H, n;
    long double N_1, N_2;

    std::cout << "Введите количество слов: ";
    std::cin >> H;
    std::cout << "Введите количество символов в словаре: ";
    std::cin >> n;

    N_1 = H * pow(m, 2);
    N_2 = pow(m, n);

    std::cout << "Вероятность успешной гибридной атаки: " << N_1 / N_2 << std::endl;

    return 0;
}