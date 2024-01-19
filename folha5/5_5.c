#include<stdio.h>
#include<ctype.h>

int algum_digito(char str[]) {
    unsigned i=0;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            return 1;   //basta haver um numero e o programa encerra returnando 1
        }
        i++;
    }
    return 0;
}
int main(){
    algum_digito("ahg9ahdh2");
    return 0;
}