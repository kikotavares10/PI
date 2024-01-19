#include <stdio.h>

int mediana(int a, int b, int c) {
    if (a <= b && b <= c) {
        printf("Mediana: %d\n", b);
    } else if (a <= c && c <= b) {
        printf("Mediana: %d\n", c);
    } else if (b <= a && a <= c) {
        printf("Mediana: %d\n", a);
    } else if (b <= c && c <= a) {
        printf("Mediana: %d\n", c);
    } else if (c <= a && a <= b) {
        printf("Mediana: %d\n", a);
    } else if (c <= b && b <= a) {
        printf("Mediana: %d\n", b);
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    mediana(a, b, c);
    return 0;
}