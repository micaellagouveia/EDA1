#include <stdio.h>
#include <stdlib.h>

int encaixa(int a, int b)
{
    int restoB, restoA, result;

    while (b)
    {
        restoB = b % 10;
        restoA = a % 10;
        if (restoA != restoB)
        {
            result = 0;
            break;
        }
        b = b / 10;
        a = a / 10;
    }
    if (!b)
    {
        result = 1;
    }

    return result;
}

int segmento(int a, int b)
{
    int x, result;
    int A, B;

    if (a >= b)
    {
        A = a;
        B = b;
    }
    else
    {
        A = b;
        B = a;
    }
    x = encaixa(A, B);

    while (A)
    {
        if (x)
        {
            result = 1;
            break;
        }
        else
        {
            A = A / 10;
            x = encaixa(A, B);
        }
    }
    if (!A)
    {
        result = 0;
    }
    return result;
}