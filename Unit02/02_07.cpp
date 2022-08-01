#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n%.2f", a/b, (float) a/ b);
    return 0;
}