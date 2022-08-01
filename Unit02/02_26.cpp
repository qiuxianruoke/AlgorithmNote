#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int array[100];
    for (int i=0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i=0; i < n-1; i++) {
        for (int j=0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                int tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
    for (int i=0; i < n; i++) {
        printf("%d", array[i]);
        printf(i < n-1? " ": "");
    }
    return 0;
}