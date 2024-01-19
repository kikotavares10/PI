#include<stdio.h>
#define SIZE 5

void construir_magico(){
    int square[SIZE][SIZE] = {0};
    int i=0, j=SIZE/2;
    int di=-1, dj=1;
    square[0][SIZE/2]=1;

    for (int num=2; num<=SIZE*SIZE; num++){
        if(square[(i+di)%SIZE][(j+dj)%SIZE] !=0){
            i=(i+di)%SIZE;
            j=(j+dj)%SIZE;
            square[i][j]=num;
        }
        else{
            i= (i+1)%SIZE;
            square[i][j]=num;
        }
    }
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            printf("%d", square[i][j]);
        }
        printf("\n");
    }
}
void main(){
    construir_magico();
}