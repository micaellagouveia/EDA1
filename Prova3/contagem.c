#include <stdio.h>
#include <stdlib.h>

void ord_contagem(int *v, int n, int a, int b)
{
    int *aux = calloc(b - a + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        aux[v[i] - a]++;
    }

    int j = 0;
    for (int i = 0; i < b - a + 1; i++)
    {
        while (aux[i] > 0)
        {
            v[j] = i + a;
            j++;
            aux[i]--;
        }
    }
    free(aux);
}

int main()
{

    int v[6] = {7, 3, 2, 4, 4, 0};

    printf("Vetor Inicial: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Vetor Ordenado: \n");

    ord_contagem(v, 6, 0, 7);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
