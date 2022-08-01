#include <cstdio>
#include <cstring>

int main() {
    int x;
    int array[10];
    scanf("%d", &x);
    memset(array, x, sizeof(array));
    printf("%d", array[0]);
    return 0;
}