#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, menor, tam, n;
    int *freq = calloc(10000000, sizeof(int));

    scanf("%d", &tam);

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &n);

        freq[n]++;

        if (i == 0)
        {
            maior = n;
            menor = n;
        }

        if (n < menor)
        {
            menor = n;
        }
        else if (n > maior)
        {
            maior = n;
        }
    }

    for (int i = menor; i <= maior; i++)
    {
        while (freq[i] > 0)
        {
            if (i < maior)
            {
                printf("%d ", i);
            }
            else if (freq[i] > 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d\n", i);
            }
            freq[i]--;
        }
    }

    free(freq);

    return 0;
}