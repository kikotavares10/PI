int mdc(int a, int b){
    while( a!=b) {
        if (a>b) {
            a-=b;
        }
        else {
            b-=a;
        }
    }
    return a;
}

void reduzir(int *pnum, int *pdenom){
    int a = *pnum, b = *pdemon;
    int maxdivcom = mdc(a, b);
    *pnum = *pnum/maxdivcom;
    *pdenom = *pdenom/maxdivcom;
}