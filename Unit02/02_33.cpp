#include <iostream>
#include <cstring>
#include <cstdio>

const int MAX = 50 + 1;
char str[2][MAX];

int main() {
    std::cin.getline(str[0], MAX);
    std::cin.getline(str[1], MAX);
    int result = strcmp(str[0], str[1]);
    if (result > 0) {
        printf(">");
    }
    else if (result == 0) {
        printf("=");
    }
    else {
        printf("<");
    }
    return 0;
}