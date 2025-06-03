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

int fibo_rec(int n) {
    if (n == 0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    return fibo_rec(n-1) + fibo_rec(n-2);;
}
int soma_element_array(int *vect,int tamanho) {
    if (tamanho == 0) return 0;
    return vect[tamanho - 1] + soma_element_array(vect, tamanho -1);
}

int busca_bin_rec(int *vect,int inicio, int fim, int element) {
    int medio;
    medio = (inicio+fim)/2;
    if (inicio == fim) {
        return -1;
    }
    if (element > vect[medio]) {
        inicio = medio;
        return busca_bin_rec(vect,inicio,fim,element);
    }else{
        fim = medio;
        return busca_bin_rec(vect,inicio,fim,element);

    }
}