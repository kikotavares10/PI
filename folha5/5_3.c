#include<stdio.h>

int comprimento(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;          //conta letra a letra da string enquanto esta não acaba
    }
    return i;
}

int palindromo(char str[]) {
    int comp = comprimento(str);
    int i = 0;
    while (comp > 0){
        if (str[i] != str[comp-1]){ //vê se são iguais as letras na posições simétricas 
            return 0;
        }
        i++;
        comp--;
    }
    return 1;
}

int main(){
    palindromo("ana");
    return 0;
}