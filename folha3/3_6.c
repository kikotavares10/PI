#include <stdio.h>

int primo(int n) {
    if (n%2 == 0) {
        return 0;
    }
    else {
        for (int i = 3;i*i <= n; i += 2){
            if (n%i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int l;
    printf("Limite Superior? "); scanf("%d",&l);
    while (l < 2) {
        return 0;
    }

    for (int n = 2; n <= l; n++) {
        if (primo(n)){
            printf("%d ", n);
        }
    }
    return 0;
}
