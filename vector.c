#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Vector;

void vectorIncrement(Vector *this, Vector other) {
    this->x += other.x;
    this->y += other.y;
}

void vectorDecrement(Vector *this, Vector other) {
    this->x -= other.x;
    this->y -= other.y;
}

int vectorEqual(Vector a, Vector b) {
    return a.x == b.x && b.y == b.y;
}

Vector vectorSum(Vector a, Vector b) {
    Vector result = a;
    
    vectorIncrement(&result, b);
    return result;
}

Vector vectorDiff(Vector a, Vector b) {
    Vector result = a;
    
    vectorDecrement(&result, b);
    return result;
}

double vectorLen(Vector this) {
    return hypot(this.x, this.y);
}

void vectorPrint(Vector this) {
    printf("(%g, %g)", this.x, this.y);
}
