#include <cstdio>

struct Point {
    int x, y;
    Point() {}
    Point(int _x, int _y) :x(_x), y(_y) {}
};

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    Point p = Point(x, y);
    printf("%d %d", p.x, p.y);
    return 0;
}