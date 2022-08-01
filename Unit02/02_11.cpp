#include <stdio.h>

int main() {
    int year, month, day, hour, min, s;
    scanf("%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &min, &s);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", year, month, day, hour, min, s);
    return 0;
}
