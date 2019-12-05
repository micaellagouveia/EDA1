#include <stdio.h>
#include <stdlib.h>

// Esta função recebe um inteiro x e um vetor
// crescente v[0..n-1] e devolve um índice j
// em 0..n tal que v[j-1] < x <= v[j].

int buscaSequencial(int x, int n, int *v)
{
    int j = 0;
    while (j < n && v[j] < x)
        j++;
    return j;
}

int main()
{

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Vetor Ordenado: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\nElemento a ser procurado: %d\n", v[5]);

    int i = buscaSequencial(v[5], 10, v);

    printf("Elemento encontrado: %d\n", v[i]);

    return 0;
}