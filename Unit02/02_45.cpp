#include <cstdio>
#include <cmath>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    double result1 = a * asin(sqrt(b)/2);
    double result2 = c * asin(sqrt(d)/2);
    double eps = pow(1, -8);
    if (result1 - result2 > eps) {
        printf("1");
    }
    else if (fabs(result1 - result2) < eps) {
        printf("0");
    }
    else {
        printf("2");
    }
    return 0;
}