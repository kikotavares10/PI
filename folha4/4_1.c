#include <stdio.h>
#include<math.h>

int main() {
    int a;
    float x0,x1;
    scanf("%d", &a);
    x0=a/2.0;
    x1=0.5*(x0+a/x0);
    while (fabs(x1-x0) >= epsilon) {
        x0=x1;
        x1=0.5*(x0 + a/x0);
        printf("%.10lf\n", x1);
    }
    return 0;
}