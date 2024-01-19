#include <stdio.h>
#include <math.h>

int Primo(int n) {
    int i;
    if( n<=1) {
        return 0;
    }
    for(i = 2; i*i <= n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}


int main() {
    int n,num1=0,num2=0,i;
    scanf("%d", &n);
    for (i = n; ;i++) {
        if (Primo(i) && Primo(i+2)) {
            num1=i;
            num2=i+2;
            break;
        }
    }
    printf("(%d,%d)\n", num1,num2);
    return 0;
}