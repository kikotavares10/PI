#include <stdio.h>

int main() {
    int n,d,a,b;
    printf("Numerador: "); 
    scanf("%d", &n);
    printf("Denominador: "); 
    scanf("%d", &d);
    a=n;
    b=d;
    
    while( a!=b) {
        if (a>b) {
            a-=b;
        }
        else {
            b-=a;
        }
    }
    printf("A fração %d/%d é equivalente a %d/%d", n,d,n/a,d/a);
    return 0;
}