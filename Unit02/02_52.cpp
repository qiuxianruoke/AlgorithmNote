#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int x;
    while (n--) {
        scanf("%d", &x);
        printf("%d", x+1);
        printf(n != 0? " ": "");
    }
    return 0;
}