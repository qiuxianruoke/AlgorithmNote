#include <cstdio>
#include <cmath>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int tmp;
    int sum;
    bool isHad = false;
    for (int i=a; i <= b; i++) {
        tmp = i;
        sum = 0;
        for (int idx=0; idx < 3; idx++) {
            sum += pow(tmp % 10, 3);
            tmp /= 10;
        }
        if (sum == i) {
            if (!isHad) {
                isHad = true;
            }
            else {
                printf(" ");
            }
            printf("%d", i);
        }
    }
    if (!isHad) {
        printf("NO");
    }
    return 0;
}