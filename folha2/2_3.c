#include <stdio.h>

int main() {
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if (b > maior) {
        maior = b;
    }
    else if (c > maior) {
        maior = c;
    }
    printf("%d\n", maior);
}