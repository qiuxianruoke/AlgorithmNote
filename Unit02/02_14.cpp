#include <cstdio>
#include <cmath>

int main() {
    double d;
    scanf("%lf", &d);
    printf("%.2f %.0f %.0f %.0f %.2f", fabs(d), floor(d), ceil(d), round(d), pow(d, 5));
    return 0;
}
