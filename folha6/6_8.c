#include<stdio.h>
#include<ctype.h>

int decimal(char str[]){
    int num = 0, i=0;
    while (str[i] != '\0'){
        assert("0"<=str[i] && str[i]<="9");
        int ascii = str[i];
        ascii -= 48;
        num *=10;
        num +=ascii;
        i++;
    }
    return num;
}