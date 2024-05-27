#include <iostream>
#include <cmath>

unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    unsigned long long n_2;
    unsigned long long m = 46;
    long double t_1;
    long double t_2;
    long double t = 0;


    std::cout << "Введите максимальную длину n2: ";
    std::cin >> n_2;
    std::cout << "Введите время для для генерации одного значения t1: ";
    std::cin >> t_1;
    std::cout << "Введите время сравнения двух хэш-значений t2: ";
    std::cin >> t_2;
    std::cout << "Введите мощность m: ";
    std::cin >> m;

    for(int i = 3; i <= n_2; ++i) {
        t += factorial(i) / factorial(i - 3) * pow(m, i - 3) * (t_1 + t_2);
    }

    std::cout << "Время подбора пароля равно " << t / 365 / 24 / 60 / 60 << " лет";

    return 0;
}