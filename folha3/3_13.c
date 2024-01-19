#include <stdio.h>

double serie_log(double x, int n) [
    double resultado = 0;
    double potencia_x = c;
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            resultado -= potencia_x / i;
        }
        else {
            resultado += potencia_x / i;
        }
        potencia_x *= x;
    }
    return resultado;
]