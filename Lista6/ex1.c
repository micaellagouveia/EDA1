#include <stdio.h>
#include <stdlib.h>

void troca(int *valor1, int *valor2)
{
    int aux = *valor1;
    *valor1 = *valor2;
    *valor2 = aux;
}

void bubble_sort(int *vet, int tam)
{
    int aux;

    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (*(vet + j) > *(vet + j + 1))
            {
                troca(&vet[j], &vet[j + 1]);
            }
        }
    }
}

int main()
{
    int tam = 0;
    int *vet = malloc(1000 * sizeof(int));

    while (scanf("%d", &vet[tam]) != EOF)
        tam++;

    bubble_sort(vet, tam);

    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("%d ", *(vet + i));
        else
            printf("%d\n", *(vet + i));
    }

    return 0;
}