#include <stdio.h>

int main() {
    int count = 0;
    char c;
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            count++;
        }
    }
    printf("A frase contem %d letras\n", count);
    return 0;
}