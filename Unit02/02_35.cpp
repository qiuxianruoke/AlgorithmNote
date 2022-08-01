#include <cstdio>
#include <iostream>

int main() {
    char str[30];
    std::cin.getline(str, 30);
    int a, b, c;
    if (sscanf(str, "%d is greater than %d", &a, &b) == 2) {
        printf(a > b? "Yes": "No");
    }
    else if (sscanf(str, "%d is equal to %d plus %d", &a, &b, &c) == 3) {
        printf(a == b+c? "Yes": "No");
    }
    else {
        printf("???");
    }
    return 0;
}