#include <stdio.h>

// Declaring a structure big having a small structure named s
typedef struct {
    float b;
} small;

struct big {
    int m;
    small s;
};

// members of a structure may also be structures
typedef struct {
    int x;
    int y;
} point;

typedef struct {
    float radius;
    point center;
} circle;

// Nested curly braces are used to nitialize members that are structs, dot operator is used twice to access members.
circle a = {1.45, {1, 3}};


int main () {
    printf("%3.1f\t %d\t %d\n", a.radius, a.center.x, a.center.y);

    return 0;
}