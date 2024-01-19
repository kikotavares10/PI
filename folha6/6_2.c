#include<stdio.h>
#include<ctype.h>

int desordem(int vec[], int size){
    unsigned c=0;
    for (int i=0; i <= size-2; i++){
        if (vec[i]>vec[i+1]){  // conta quantos números não estão ordenadas por ordem crescente, e retorna essa contagem
            c++;
        }
    }
    return c;
}