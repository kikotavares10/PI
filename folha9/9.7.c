#include<math.h>
#include<stdio.h>

typedef struct{
    double x, y;
} Ponto;

//1.
double distancia(Ponto a, Ponto b){
    double resultado = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    return resultado;
}

//2.
int mesmo_ponto(Ponto a, Ponto b){
    if(distancia(a,b)<0.000001) return 1;
    return 0;
}

//3.
void pontos_mais_distantes(){
    Ponto listaPontos[10];
    for(int i = 0; i<10; i++){
        Ponto pt;
        scanf("%lf %lf", &pt.x, &pt.y);
        listaPontos[i]=pt;
    }
    
    Pontos pt1, pt2;
    double maiorDist = 0.0;
    for (int i = 0; i<10; i++){
        for (int j= i;j<10;j++){
            if (maiorDist < distancia(listaPontos[i], listaPontos[j])){
                maiorDist = distancia(listaPontos[i], listaPontos[j]);
                pt1=listaPontos[i];
                pt2=listaPontos[j];
            }
        }
    }
    printf("Ponto 1: (%lf, %lf)\nPonto 2: (%lf, %lf)\n", pt1.x, pt2.y, pt2.x, pt2.y);
}

//4.
typedef struct{
    Ponto infEsq, supDir;
} Rect;

//alinea 5.
double rect_area(Rect r){
    double largura = r.supDir.x - r.infEsq.x;
    double altura = r.supDir.y - r.infEsq.y;
    return altura*largura;
}

//alinea 6.
int ponto_dentro(Rect r, Ponto p){
    if (p.x >= r.infEsq && p.x <= r.supDir.x && p.y >= r.infEsq.y && p.y <= r.infDir.y) return 1;
    return 0;
}

//alinea 7.
int rect_dentro(Rect r1, Rect r2){
    if (ponto_dentro(r1, r2.infEsq) && ponto_dentro(r1,r2.supDir)) return 1;
    return 0;
}