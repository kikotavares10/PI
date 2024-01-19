#include<stdio.h>
#include<ctype.h>

int ordenada(int vec[], int size){
    for(int i=0; i<=size-2; i++){
        if (vec[i]>vec[i+1]){  // testa se o valor da sequência é maior que o seguinte, se isso acontecer retorna 0
            return 0;            // porque quer dizer que a sequência não está ordenada por ordem crescente
        }
    }
    return 1;
}