#include<stdio.h>
#include<ctype.h>

int filtrar_positivos(int vec[], int size){
    int c = 0, p = 0;
    for (int i = 0; i < size; i++){
        if (vec[i] > 0){
            vec[p]=vec[i];
            c++;
            p++;
        }
    }
    return c;
}