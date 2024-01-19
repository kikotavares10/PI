#include<assert.h>

void inserir(int vec[], int n,int x){
    for(int i=1;i<n;i++){
        assert(vec[i-1]<=vec[i]);
    }
    int j=n-1;
    while(j>=0 && vec[j]>x){
        vec[j+1]=vec[j];
    }
    vec[j+1]=x;
    for(int i=1;i<=n;i++){
        assert(vec[i-1]<=vec[i]);
    }
}
