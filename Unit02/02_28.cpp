#include <cstdio>

int array[1000000];

int main() {
    int n;
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