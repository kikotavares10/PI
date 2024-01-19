#include <stdio.h>

int main() {
    int n,r,c=1;
    scanf("%d %d", &n,&r);
    printf("mdc(%d,%d) = ", n,r);
    while (n!=r) {
        if (n > r) {
            n -=r;
            printf("mdc(%d,%d) = ", n,r);
            c++;
        }
        else {
            r -= n;
            printf("mdc(%d,%d) = ", n,r);
            c++;
        }
    }
    printf("%d\n", n);
    printf("%d iterações", c);
    return 0;
}