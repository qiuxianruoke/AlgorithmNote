#include <cstdio>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    int cache;
    for (int i=0; i < n; i++) {
        scanf("%d", &cache);
        if (cache % 2) sum += cache;
    }
    printf("%d", sum);
    return 0;
}