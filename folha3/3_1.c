#include <stdio.h>

int main() {
    float x,resp;
    scanf("%f", &x);

    resp = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("%f\n", resp);
    return 0;
}