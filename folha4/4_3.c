#include<stdio.h>
#include <ctype.h>

int main() {
    int c1 = getchar(), c2= getchar(), count = 0;
    while (c2 != EOF) { //termina com o ctrl-D
        if ((c1 != ' ' && c1 != '\t' && c1 != '\n') && (c2 == ' ' || c2 == '\t' || c2 == '\n')) {
            count++;
        }
        c1 = c2;
        c2 = getchar(); 
    }
    printf("%d", count);
    return 0;
}

