#include <iostream>
#include <cmath>

int main() {
    long long v = 500000;
    long long time = 1 * 365 * 24 * 60 * 60;
    long long n_min;
    long long m;
    long long N;
    std::cout << "Введите количество символов алфавита: ";
    std::cin >> m;

    n_min = std::log(v * time) / std::log(m);

    std::cout << "Минимальная длина пароля: " << n_min;
}