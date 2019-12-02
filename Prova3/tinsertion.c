#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

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