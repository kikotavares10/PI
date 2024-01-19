#include<stdio.h>
#include<assert.h>

int max(int a, int b, int c){  //encontrar o maior entre os 3
    int maior;
    maior = a;
    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
}
int min(int a, int b, int c){ //encontrar o menor entre os 3
    int menor;
    menor = a;
    if ( b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }
    return menor;
}

int mediana(int a, int b, int c){
    int maior = max(a,b,c);
    int menor = min(a,b,c);
    int soma = a+b+c;  
    int mediana = soma-maior-menor;  //se subtrairmos o maior e o menor, fica o do meio, ou seja a mediana
    assert(menor <= mediana && mediana <= maior);
    return mediana;
}