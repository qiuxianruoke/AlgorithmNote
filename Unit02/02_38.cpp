#include <cstdio>

int max2(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int max3(int a, int b, int c) {
    a = max2(a, b);
    a = max2(a, c);
    return a;
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d", max3(a, b, c));
    return 0;
}