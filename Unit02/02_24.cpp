#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=1; i <= n; i++) {
        for (int j=1; j <= n-i+1; j++) {
            printf("%d", j);
            printf(j == n-i+1? "\n": " ");
        }
    }
    return 0;
}