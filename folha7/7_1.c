#include<stdio.h>
#define N 100

int in_resp(int resp[], int n, int size){
    for (int i=0;i<size;i++){
        if (resp[i] == n) return 1;
    }
    return 0;
}

int elimina_repetidos(int num[], int resp[], int size){
    int j=0;
    for (int i = 0;i<size;i++){
        if(!in_resp(resp, num[i], size)){
            resp[j]=num[i];
            j++;
        }
    }
    return j;
}

void main(){
    int num[N] = {0};
    int resp[N] = {0};

    int n,i=0;
    scanf("%d", &n);
    while (n!=-1){
        num[i]=n;
        i++;
        scanf("%d",&n)
    }
    int j = elimina_repetidos(num,resp,N);
    for (int i=0;i<j;i++0){
        printf("%d", resp[i]);
    }
}