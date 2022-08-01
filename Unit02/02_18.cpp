#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
        default:
            printf("Greater than 5");
    }
    return 0;
}