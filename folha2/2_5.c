#include <stdio.h>

int main() {
    int a,b,c;
    printf("Primeiro valor: "); scanf("%d\n", &a);
    printf("Segundo valor: "); scanf("%d\n", &b);
    printf("Terceiro valor: "); scanf("%d\n", &c);
    
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