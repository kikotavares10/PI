#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand ((unsigned)time(NULL));
    int numTentativas = 0, num = 1 + rand() %1000, tentativa;
    printf("Adivinha o numero: "); scanf("%d", &tentativa);
    while(tentativa != num) {
        if (tentativa < num) {
            printf("Demasiado baixo!\n");
        }
        else if (tentativa > num) {
            printf("Demasiadp alto!\n")
        }
        numTentativas++;
        printf("Adivinha o numero: "); scanf("%d", &tentativa);
        
    }
    printf("Acertou em %d tentativas!\n", numTentativas);
    return 0;
}