#include<stdio.h>

void range(int vec[], unsigned size, int inicio, int incr) {
    int i;
    for (i = 0; i < size; i++) {
        vec[i]=inicio+i*incr;
    }
}

int main(){
    int a[5];
    range(a,5,3,2);
}