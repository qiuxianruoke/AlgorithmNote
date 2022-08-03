#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int sum =0;
    int n_cp = n;
    for (int i=0; i < 3; i++) {
        sum += pow(n % 10, 3);
        n /= 10;
    }
    if (sum == n_cp) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}