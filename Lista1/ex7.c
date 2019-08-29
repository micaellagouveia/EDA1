#include <stdio.h>

int main()
{

    int n, m, p, a, b;
    int Pay = 1, Pax = 1, Pby, Pbx;

    scanf("%d %d", &n, &m);
    scanf("%d", &p);

    if (n >= 1 && m <= 100000 && p >= 0 && p <= 1000)
    {
        Pbx = n;
        Pby = m;

        for (int i = 1; i <= p; i++)
        {
            scanf("%d %d", &a, &b);

            switch (a)
            {
            case (1):
                Pay++;
                break;

            case (2):
                Pay--;
                break;

            case (3):
                Pax++;
                break;

            case (4):
                Pax--;
                break;
            }

            switch (b)
            {
            case (1):
                Pby++;
                break;

            case (2):
                Pby--;
                break;

            case (3):
                Pbx++;
                break;

            case (4):
                Pbx--;
                break;
            }

            if (Pax == Pbx && Pay == Pby)
            {
                for (int j = i; j < p; j++)
                {
                    scanf("%d %d", &a, &b);
                }
                printf("Encontraram-se na posicao (%d,%d) no passo %d\n", Pax, Pay, i);
                return 0;
            }

            if (Pax < 1 || Pay < 1 || Pax > n || Pay > m)
            {
                for (int j = i; j < p; j++)
                {
                    scanf("%d %d", &a, &b);
                }
                printf("PA saiu na posicao (%d,%d) no passo %d\n", Pax, Pay, i);
                return 0;
            }

            if (Pbx > n || Pby > m || Pbx < 1 || Pby < 1)
            {
                for (int j = i; j < p; j++)
                {
                    scanf("%d %d", &a, &b);
                }
                printf("PB saiu na posicao (%d,%d) no passo %d\n", Pbx, Pby, i);
                return 0;
            }
        }
        printf("Nao se encontraram\n");
    }
    return 0;
}