#include <stdio.h>
#include <stdlib.h>

void troca(int *primeiro_valor, int *segundo_valor) {
    int auxiliar    = *primeiro_valor;
    *primeiro_valor = *segundo_valor;
    *segundo_valor  = auxiliar;
}

void bubble_sort(int *vetor, int tamanho) {
    int auxiliar;

    for (int i=0; i<tamanho-1; i++) {
        for (int j=0; j<tamanho-i-1; j++) {
            if (vetor[j] > vetor[j+1]) troca(&vetor[j], &vetor[j+1]);
        }
    }
}

int main() {
    int tamanho = 0;
    int vetor[1000];

    while(scanf("%d", &vetor[tamanho]) != EOF) tamanho++;

    bubble_sort(vetor, tamanho);

    for (int i=0; i<tamanho; i++){
        if (i < tamanho-1) printf("%d ", vetor[i]);
        else printf("%d\n", vetor[i]);
    }

    return 0;
}