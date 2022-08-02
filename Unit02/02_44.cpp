#include <iostream>
#include <iomanip>

int main() {
    int n;
    double d;
    char str[110];
    std::cin >> n >> d;
    getchar();
    std::cin.getline(str, 110);
    std::cout << n << std::endl;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << d << std::endl;
    std::cout << str;
    return 0;
}