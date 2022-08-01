#include <cstdio>
#include <iostream>
#include <cstring>

int main() {
    char str[51];
    std::cin.getline(str, 51);
    printf("%d", strlen(str));
    return 0;
}