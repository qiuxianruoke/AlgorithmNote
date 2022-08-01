#include <cstdio>

void increase(int& x) {
    x++;
}

int main() {
    int n;
    scanf("%d", &n);
    increase(n);
    printf("%d", n);
    return 0;
}