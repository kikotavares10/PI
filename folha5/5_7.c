#include<stdio.h>
#include<ctype.h>

int decimal(char str[]){
    int num = 0, i=0;
    while (str[i] != '\0'){   //testa enquanto a string não acabar
        int ascii = str[i];
        ascii -= 48;
        num *=10;
        num +=ascii;
        i++;
    }
    return num;
}