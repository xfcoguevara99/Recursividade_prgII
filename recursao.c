//
// Created by aluno on 30/05/25.
//

#include "recursao.h"
int mult_ite(int x, int y) {
    int resultado;
    for (int i = 0; 1<y;i++) {
        resultado +=x;
    }
    return resultado;
}

int mult_rec(int x, int y) {
    if (y==0) return 0;
    return x+mult_rec(x,y-1);
}

int fact_rec(int x) {
    if (x==1 || x==0) return 1;
    return x*fact_rec(x-1);
}