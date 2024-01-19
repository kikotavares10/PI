#include <stdio.h>


int main() {
    int d,m,y;
    scanf("%d %d %d", &d, &m, &y);
    if (m == 2 && ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ) {
        if (d == 29) {
            d = 1;
            m = 3;
            printf("%d %d %d\n", d, m, y);
        }
        else {
            d += 1; 
            printf("%d %d %d\n", d, m, y);
        }
    }
    else if ( d == 28 && m == 2) {
        d = 1;
        m += 1;
        printf("%d %d %d\n", d, m, y);
    }
    else if (d == 31 && ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 9 || m == 11)) {
        d = 1;
        m+=1;
        printf("%d %d %d\n", d, m, y);
    }
    else if (d == 30 && (m == 4 || m == 6 || m == 9|| m == 11)) {
        d = 1;
        m+=1;
    }
    else if (d ==30 && m == 12) {
        d = 1;
        m = 1;
        y+=1;
        printf("%d %d %d\n", d, m, y );
    }
    else {
        d += 1;
        printf("%d %d %d\n", d, m, y);
    }

    return 0;
}