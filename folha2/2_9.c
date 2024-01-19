#include <stdio.h>

int main() {
    int n, divisor = 2;
    printf("Numero inteiro: "); scanf("%d", &n);
    printf("%d: ", n);
    while (n>1) {
        if (n % divisor == 0) {
            printf("%d ", divisor);
            n /=divisor;
        }
        else {
            divisor++;
        }
    }
    printf("\n");
    return 0;
}