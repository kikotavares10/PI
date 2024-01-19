#include<stdio.h>
#include<ctype.h>

void ordenar(int vec[], int n){
    int i, p;
    for(i = 1; i<n;i++){
        int m = vec[i];
        p = i-1;
        while(p>=0 && vec[p] > m){
            vec[p+1] = vec[p];
            j--;
        }
        vec[p+1] = m;
    }
}

void main(){
    int vec[SIZE] = {0};
    int x, i=0;
}