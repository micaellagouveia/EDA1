#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*Funcionamento:
1. Utilizamos o primeiro elemento do vetor como parâmetro.
2. Enquanto o elemento seguinte for maior que o anterior, fazemos uma troca
3. Acaba quando analisarmos até o ultimo elemnto do vetor.
*/

void insertionSort(int *v, int n)
{

    // Consideramos o primeiro elemento ordenado, então nossa contagem começa a partir do 2o elemento
    for (int i = 1; i < n; i++)
    {
        // vamos percorrer i vezes, ou até o par de elementos nao estar ordenado
        int j = i;
        while (j >= 1 && v[j] < v[j - 1])
        {
            //enquanto o par estiver desordenado, fazemos a troca.
            // Esse processo pode se repetir i vezes
            troca(&v[j], &v[j - 1]);
            j--;
        }
    }
}


void insertionSortRec(int *v, int n)
{
    if (n > 0)
    {
        insertionSortRec(v, n - 1);
        int j = n;
        while (j >= 1 && v[j] < v[j - 1])
        {
            troca(&v[j], &v[j - 1]);
            j--;
        }
    }
}

int main()
{

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

    insertionSort(v, 5);

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
