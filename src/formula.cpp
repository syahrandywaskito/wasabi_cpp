#include "includes/formula.h"

// Area Triangle Function
int areaTriangle(int base, int height){
    int area{1 * base * height / 2};
    return area;
}

// Around Triangle Function
int aroundTriangle(int side1, int side2, int side3){
    int around{side1 + side2 + side3};
    return around;
}

// Area Square Function
int areaSquare(int side){
    int area{side * side};
    return area;
}