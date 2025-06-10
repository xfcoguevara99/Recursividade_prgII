#include <stdio.h>
#include "recursao.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    // clock_t inicio,fim;
    // double tempo;
    // inicio = clock();
    // int resultado = fibo_rec(32);
    // printf("O numero é: %d\n",resultado);
    // fim = clock();
    // tempo = (double)(fim - inicio)/CLOCKS_PER_SEC;
    // printf("Tempo transcurrido: %f\n",tempo);
    // inicio = clock();
    // resultado = fibo_rec(32);
    // printf("O numero é: %d\n",resultado);
    // fim = clock();
    // tempo = (double)(fim - inicio)/CLOCKS_PER_SEC;
    // printf("Tempo transcurrido: %f\n",tempo);
    char *string_dinamica;
    const int tamanho_inicial = 100; // Tamanho inicial

    string_dinamica = malloc(tamanho_inicial * sizeof(char)); // Aloca memória inicial
    if (string_dinamica == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    printf("Digite uma string: ");
    fgets(string_dinamica, tamanho_inicial, stdin); // Lê a string
    string_dinamica[strcspn(string_dinamica, "\n")] = 0; // Remove o '\n' do fgets()

    int tamanho_real = strlen(string_dinamica);
    string_dinamica = realloc(string_dinamica, (tamanho_real + 1) * sizeof(char)); // Realoca para o tamanho real
    if (string_dinamica == NULL) {
        printf("Erro na realocação de memória.\n");
        free(string_dinamica);
        return 1;
    }

    printf("A string que você digitou foi: %s\n", string_dinamica);

    free(string_dinamica);
    string_dinamica = NULL;

    return 0;
}
