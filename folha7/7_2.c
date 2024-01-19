#include<stdio.h>

int calc(char str[]){
    int i=0,num1=0,num2=0;
    while (str[i]!= '+' && str[i]!= '-' && str[i]!= '*'){
        int ch = str[i]-'0';
        num1 *= 10;
        num1 += ch;
        i++;
    }

    int operator = str[i];
    i++;

    while (str[i]!='\0'){
        int ch = str[i] - '0';
        num2 *= 10;
        num2 += ch;
        i++;
    }
    int r;
    switch(operator){
        case '+':
            r=num1+num2;
            break;
        case '-':
            r=num1-num2;
            break;
        case '*':
            r=num1*num2;
            break;
    }
    return r;
}