#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n_2;
    long double t_1;
    long double t_2;
    int m;

    long double T = 0.0;
    long long N = 0;

    std::cout << "Введите максимальную длину n2: ";
    std::cin >> n_2;
    std::cout << "Введите время для для генерации одного значения t1: ";
    std::cin >> t_1;
    std::cout << "Введите время сравнения двух хэш-значений t2: ";
    std::cin >> t_2;
    std::cout << "Введите мощность m: ";
    std::cin >> m;

    for(int i = 1; i <= n_2; ++i) {
        N += pow(m, i);
    }

    T = N * (t_1 + t_2);

    std::cout << "Время подбора пароля T: " << std::fixed << T / 60 / 60 << " часов";
}