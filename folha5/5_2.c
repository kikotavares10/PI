#include<stdio.h>
#include<ctype.h>

void capitalizar(char str[]){
    int i = 0;
    while (str[i] != '\0') { //percorre a string até encontrar o fim
        if (isalpha(str[i])){ //se for uma letra alfabética
            str[i] = toupper(str[i]); //transfprma em maiúscula
        }
        i++;
    }
}
int main(){
    capitalizar("frAncIsco");
    return 0;
}