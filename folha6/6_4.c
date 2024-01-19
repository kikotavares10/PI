#include<stdio.h>
#include<ctype.h>

int segundo_menor(int vec[], int size){
    int i, j;
    for (i=0; i<=1; i++){
        int imin = i;
        for (j = i+1; j<size; j++){
            if (vec[j]<vec[imin]){
                imin=j;
            }
        }
        if (imin != i){
            int temp = vec[i];
            vec[i] = vec[imin];
            vec[imin] = temp;
        }
    }
    return vec[1];
}
