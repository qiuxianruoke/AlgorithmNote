#include <iostream>
#include <cstdio>

const int MAX = 50 + 1;
char str[5][MAX];

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    for (int i=0; i < n; i++) {
        std::cin.getline(str[i], MAX);
    }
    for (int i=0; i < n; i++) {
        printf("%s\n", str[i]);
    }
}