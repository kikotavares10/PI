#include <stdio.h>

int potencia(int x, int n) {
    int resultado = 1;
    while (n > 0) {
        if (n % 2 ==1) {
            resultado *=x;
        }
        x *= x;
        n /=2;
    }
    return resultado;
}