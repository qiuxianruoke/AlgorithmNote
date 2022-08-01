#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("Negative Number");
    }
    else {
        if (n % 2 == 1) {
            printf("Odd Number");
        } 
        else {
            printf("Even Number");
        }
    }
    return 0;
}