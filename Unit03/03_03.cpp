#include <cstdio>

const int MAX = 10+1;

int main() {
    int  n;
    scanf("%d", &n);
    int array[MAX] = {};
    bool isUp = true;
    for (int i=1; i <= n; i++) {
        scanf("%d", array+i);
        if (array[i-1] > array[i]) isUp = false;
    }
    if (isUp) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}