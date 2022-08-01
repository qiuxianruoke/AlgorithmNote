#include <stdio.h>

int main() {
    int year, month, day, hour, min, s;
    scanf("%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &min, &s);
    printf("%04d\n%02d\n%02d\n%02d\n%02d\n%02d\n", year, month, day, hour, min, s);
    return 0;
}
