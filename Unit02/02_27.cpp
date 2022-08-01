#include <cstdio>

int main() {
    int m, n;
    scanf("%d%d", &n, &m);
    int array [10][10];
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            printf("%d", array[i][j]);
            printf(j < m-1? " ": "\n");
        }
    }
    return 0;
}