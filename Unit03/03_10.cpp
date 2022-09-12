#include <cstdio>

const int MAX = 20;
int A[MAX];

int main() {
    int n, x;
    int num;
    while (scanf("%d", &n) != EOF) {
        for (int i=0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        scanf("%d", &x);
        num = 0;
        for (int i=0; i < n; i++) {
            if (A[i] == x) {
                num++;
            }
        }
        printf("%d", num);
    }
    return 0;
}