#include <stdio.h>

int main() {
    int quantia,c20,c10,c5,c1;
    c20=0,c10=0,c5=0,c1=0;
    printf("Quantia em EUR?");
    scanf("%d", &quantia);
    while (quantia >= 20) {
        quantia-=20;
        c20+=1;
    }
    while (quantia>=10) {
        quantia-=10;
        c10+=1;
    }
    while (quantia >=5) {
        quantia-=5;
        c5+=1;
    }
    while (quantia >=1) {
        quantia-=1;
        c1+=1;
    }
    printf("notas EUR 20: %d\n", c20);
    printf("notas EUR 10: %d\n", c10);
    printf("notas EUR 5: %d\n", c5);
    printf("moedas EUR 1: %d\n", c1);
}