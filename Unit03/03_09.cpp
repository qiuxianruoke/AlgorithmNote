#include <cstdio>

const int MAX = 20;
int A[MAX];

int main() {
    int n, x;
    bool isIn;
    while (scanf("%d", &n) != EOF) {
        for (int i=0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        scanf("%d", &x);
        isIn = false;
        for (int i=0; i < n; i++) {
            if (A[i] == x) {
                printf("%d", i+1);
                isIn = true;
                break;
            }
        }
        if (!isIn) {
            printf("NO");
        }
    }
    return 0;
}