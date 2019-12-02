#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
}celula;


void ordenacao_distribuicao(int *v, int n, int d)
{
    int i, j, k;
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < n; j++)
        {
            enfileira(v[j], dig(v[j], i));
            for (j = 0, k = 0; k < 10; k++)
                while (desenfileira(&v[j], k))
                    j++;
        }
    }
}

int dig(int num, int d)
{
    int t1 = pow(10, d);
    int t2 = 10 * t1;
    return (num % t2) / t1;
}

int main()
{
/*celula *fila = malloc(5 * sizeof(celula));

for (int i = 0; i < 10; i++)
{
    fila[i] = malloc(sizeof(celula));
    fila[i]->prox = fila[i];

}*/
    int *v = malloc(5 * sizeof(int));

    v[0] = 3;
    v[1] = 5;
    v[2] = 1;
    v[3] = 2;
    v[4] = 4;

    printf("Vetor Inicial: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vetor Ordenado: \n");

    ordenacao_distribuicao(v, 5, 0);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vetor Ordenado com Recursão: \n");

    insertionSortRec(v, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);


    return 0;
}
