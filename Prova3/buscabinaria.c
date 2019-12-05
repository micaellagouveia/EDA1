#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int x, int n, int v[])
{
    int e = -1, d = n; // atenção!
    while (e < d - 1)
    {
        int m = (e + d) / 2;
        m = e + (d - e) / 2; // evita overflow

        if (v[m] < x)
            e = m;
        else
            d = m;
    }
    return d;
}

int buscaBinariaRec(int *v, int l, int r, int x)
{
    if (r >= l) 
    {

        int meio = l + (r - l) / 2;

        if (v[meio] == x)
        {
            return v[meio];
        }

        else if (v[meio] > x)
        {
            return buscaBinariaRec(v, l, meio - 1, x);
        }

        return buscaBinariaRec(v, meio + 1, r, x);
    }

    return 0;
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

    int i = buscaBinaria(v[5], 10, v);

    printf("Elemento encontrado: %d\n", v[i]);

    return 0;
}