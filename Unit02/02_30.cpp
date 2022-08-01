#include <iostream>
#include <cstdio>

const int MAX = 50+1;
char str[MAX];

int main() {
    std::cin.getline(str, MAX);
    printf("%s", str);
    return 0;
}