#include <stdio.h>

int main() {
    int n;
    char c;
    scanf("%d", &n);
    getchar();
    c = getchar();
    printf("%d\n%c", n+1, c);
    return 0;
}
