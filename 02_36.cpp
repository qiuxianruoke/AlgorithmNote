#include <cstdio>
#include <iostream>

int main() {
    char str[51];
    std::cin.getline(str, 51);
    int data[6];
    sscanf(str, "%d %d %d %d %d %d", data, data+1, data+2, data+3, data+4, data+5);
    sprintf(str, "%04d-%02d-%02d %02d:%02d:%02d", data[0], data[1], data[2], data[3], data[4], data[5]);
    printf("%s", str);
    return 0;
}