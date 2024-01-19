#include<stdio.h>
#include<ctype.h>

int comprimento(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int criterios(char str[]){
    unsigned i=0, a=0, b=0, c=0;
    while(str[i] != '\0'){
        if (islower(str[i])){
            a = 1;      //vê se é letra maiúscula
        }
        else if (isupper(str[i])){
            b = 1;      //vê se é letra minúscula
        }
        else if (isdigit(str[i])){
            c = 1;    // vê se é um numero
        }
        if (a == 1 && b == 1 && c == 1){
            return 1;       // se as três condições se verificarem retorna 1 e encerra
        }
        i++;
    }
    return 0;
}

int forte(char str[]){
    unsigned comp = comprimento(str);
    if(comp >= 6 && criterios(str)){      // se tiver comprimento maior que 1 e os criterios se verificarem retorna 1
        return 1;
    }    
    return 0;   // se não se verificarem retorn 0
}