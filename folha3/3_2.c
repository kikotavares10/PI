#include <stdio.h>

int main() {
    float x,resp;
    scanf("%f", &x);

    resp = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("%f", resp);
    return 0;
}