#include <cstdio>
#include <iostream>
#include <cstring>

const int MAX = 51;
char str[2][MAX];

int main() {
    std::cin.getline(str[0], MAX);
    std::cin.getline(str[1], MAX);
    printf("%s", strcat(str[0], str[1]));
    return 0;
}
