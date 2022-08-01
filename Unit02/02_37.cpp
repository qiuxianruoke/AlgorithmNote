#include <cstdio>

int increase(int x) {
    x++;
    return x;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d", increase(n), n);
    return 0;
}