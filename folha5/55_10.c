#include<stdio.h>
#include<ctype.h>

int repetidos(int vec[], int size){
    for (int i = 0; i < size; i++){
        int val = vec[i];   // define val como igual ao valor a que queremos comparar
        for(int p = i+1; p < size; p++){
            if (vec[p]==val){   // compara todos os valores da sequência com o determinado valor (vec[i]), e se forem iguais retorna 1 e fecha
                return 1;     
            }
        }
    }
    return 0;    // se não se verificar que existem dois iguais retorna 0
}
