#include <stdio.h>

int main() {
    int n1,n2,a,b,mmc;
    scanf("%d %d", &n1,&n2);
    a=n1;
    b=n2;
    while( a!=b) {
        if (a>b) {
            a-=b;
        }
        else {
            b-=a;
        }
    }
    mmc=(n1/a)*(n2/a)*a;
    printf("%d\n",mmc);
    return 0;
}