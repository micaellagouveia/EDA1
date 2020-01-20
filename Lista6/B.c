#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor_frequencia = calloc(10000000, sizeof(int));
    int maior_elemento;
    int menor_elemento;
    int tamanho;
    int numero;

    scanf("%d", &tamanho);

    for (int i=0; i<tamanho; i++) {
        scanf("%d", &numero);

        vetor_frequencia[numero]++;
    
        if (i==0) {
            maior_elemento = numero;
            menor_elemento = numero;
        }

        if (numero < menor_elemento) menor_elemento = numero;
        if (numero > maior_elemento) maior_elemento = numero;
    }

    for (int i=menor_elemento; i<=maior_elemento; i++) {
        while (vetor_frequencia[i]>0) {
            if (i<maior_elemento) printf("%d ", i);
            else if (vetor_frequencia[i]>1) printf("%d ", i);
            else printf("%d\n", i);
            vetor_frequencia[i]--;
        }
    }

    free(vetor_frequencia);

    return 0;
}