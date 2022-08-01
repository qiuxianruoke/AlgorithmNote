#include <cstdio>

int main() {
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i=0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i=0; i < n; i++) {
        printf("%d", array[i]);
        printf(i < n-1? " ": "");
    }
    return 0;
}