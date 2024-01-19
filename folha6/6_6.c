#include<stdio.h>
#include<assert.h>

int mdc(int a, int b){
    assert(a>0 && b>0);
    while(a != b){       // encontrar o máximo divisor comum, ou seja ir subtraindo um ao outro até serem o mesmo valor
        if (a > b){    
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}