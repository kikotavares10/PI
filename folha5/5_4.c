#include<stdio.h>
#include<ctype.h>

int todos_letras(char str[]){
    unsigned i = 0;
    while (str[i] != '\0'){ //enquanto a palavra não acabar
        if (!isalpha(str[i])){  // testa se é uma letra alfabética
            return 0; // se não retorna 0
        }
        i++;
    }
    return 1; //se sim retorna 1
}