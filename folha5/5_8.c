#include<stdio.h>
#include<ctype.h>

int contar_maiores(int vec[], int size, int val){
    int c = 0, i = 0;
    while (i < size){
        if (vec[i] > val){
            c++;           // conta quantos valores da sequência são maiores que o valor pretendido e depois retorna esse valor
        }
        i++;
    }
    return c;
}