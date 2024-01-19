#include <stdio.h>

int bissexto(int n) {
    if (n % 400 == 0) {
        return 1;
    }
    else if (n%4 == 0 && n%100 == 0 && n%400 !=0) {
        return 0;
    }
    else if(n%4 == 0) {
        return 1;
    }
    else{
        return 0;
    }
}

int prox_bissexto(int n) {
    if (bissexto(n)) {
        return n;
    }
    else {
        while(!bissexto(n)) {
            n++;
        }
        return n;
    }
}
