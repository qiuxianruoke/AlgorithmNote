#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int result = 1;
    int m = 1007;
    for (int i=1; i <= n; i++) {
        result = (result * 2)% m; 
    }
    printf("%d", result);
    return 0;
}