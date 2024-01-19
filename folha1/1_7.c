#include <stdio.h>
#define PI 3.1416
int main() {
    float r,v;
    scanf("%f", &r);
    v = (4.0/3.0)*(r*r*r)*PI;
    printf("%f\n", v);
    return 0;
}