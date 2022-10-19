#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
int main(){
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    float c = cos(d/180. * M_PI);
    float s = sin(d/180. * M_PI);
    float x = a * c - b * s;
    float y = a * s + b * c;
    printf("%f %f", x, y);
    return 0;
}