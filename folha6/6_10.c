#include<stdio.h>

int magico(int a[20][20], int n){
    int soma = 0;
    for (int i = 0; i<n; i++){
        soma += a[i][0];   // soma os valores da primeira coluna como soma de exemplo já que tem de ser todas iguais
    }
    int SomaLinha=0, SomaColuna=0;
    for (int i = 0; i<n; i++){
        for (int j=0; j<n; j++){
            SomaLinha += a[i][j];    // soma todos os valores dessa linha
            SomaColuna += a[j][i];   //soma todos os valores dessa coluna
        }
        if (SomaLinha != soma || SomaColuna != soma){
            return 0;                          // se e a soma de certa linha e coluna forem diferentes da soma genérica retorna 0 e fecha
        }
        else{
            SomaLinha=0;   // se forem iguais, reseta ambas a 0 e continua a testar
            SomaColuna=0;
        }
    }
    int SomaDiagonal1=0, SomaDiagonal2=0;
    for (int i=0; i<n; i++){
        SomaDiagonal1 += a[i][i];   //soma a diagnoal principal
        SomaDiagonal2 += a[i][n-1-i];  //soma a outra diagonal
    }
    if (SomaDiagonal1 != soma || SomaDiagonal2 != soma){      // se uma das somas das diagonais for diferente da soma genérica retorna 0
        return 0;  
    }
    return 1;   // se nunca se verificar valores de soma diferentes em todas as comparações retorna 0
}