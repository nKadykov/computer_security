#include <iostream>
#include <cmath>

int main() {
    int n_2;
    double t_1;
    double t_2;
    int m;

    double T = 0.0;
    int N = 0;

    std::cout << "Enter max length n2: ";
    std::cin >> n_2;
    std::cout << "Enter time for generating one hash value t1: ";
    std::cin >> t_1;
    std::cout << "Enter comparison time t2: ";
    std::cin >> t_2;
    std::cout << "Enter power m: ";
    std::cin >> m;

    for(int i = 0; i < n_2; ++i) {
        N += pow(m, i);
    }

    T = N * (t_1 + t_2);

    std::cout << "Password guessing time T: " << T / 60 / 60;
}