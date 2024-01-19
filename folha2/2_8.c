#include <stdio.h>

int main() {
    int n,soma,c;
    soma=0, c=0;
    double media;
    scanf("%d", &n);
    while (n != 0) {
        soma+=n;
        c++;
        scanf("%d", &n);
    }
    media=(double) soma/c;
    printf("%.2lf\n", media);
    return 0;
}