#include <stdio.h>

int soma_divisores(int n) {
    int soma=0,c;
    for (c = 1; c < n; c++) {
        if (n % c == 0) {
            soma+=c;
        }
    }
    return soma;
}

int main() {
    int n,resp;
    scanf("%d", &n);
    resp=soma_divisores(n);
    printf("%d\n", resp);
    return 0;

}