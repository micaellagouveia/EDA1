#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
/* Funcionamento:
1. Percorre o vetor n vezes.
2. Toda vez que encontrar um par desordenado, faz a troca do par.
3. Estará ordenado quando percorrer o vetor inteiro e não houver pares desordenados. */

void bubbleSort(int *v, int n)
{
    //crio uma variável para checar se preciso trocar os elementos ou não
    //só preciso trocar se o par de elementos não tiver ordenado
    int trocar = 0;
    do
    {
        //sempre zero a possibilidade de trocar quando vou percorrer o vetor novamente
        trocar = 0;

        //começo a procurar do proximo elemento, e comparo com o elemento anterior
        for (int i = 1; i < n; i++)
        {
            // se o elemento anterior for maior que o proximo, eles estao desordenados
            if (v[i - 1] > v[i])
            {
                //como eles estão desordenados, preciso fazer a troca deles
                troca(&v[i - 1], &v[i]);
                //ativo a existencia de trocar o elemento. Ela fica ativa até eu voltar a percorrer o vetor novamente
                trocar = 1;
            }
        }
    } while (trocar);
}

/* Recursão:
1. Analisando o funcionamento, percebemos que, toda vez q o vetor é percorrido, o maior elemento do vetor
sempre vai para o final do vetor.
2. Com isso, podemos criar uma recursão, que faz a troca dos elementos não ordenados, e quando percorrer
o vetor novamente, podemos percorrer o tamanho-1, pois sabemos que o último elemento é o maior elemento do vetor,
então ele já está ordenado.
3. A função acaba quando o tamanho do vetor for igual a 1, dizendo que todos os elementos foram percorridos.*/
void bubbleSortRec(int *v, int n)
{
    //Minha função acaba quando o tamanho do vetor for 1.
    if (n == 1)
        return;

    //percorrendo o vetor
    for (int i = 1; i < n; i++)
    {
        // Ordenação dos pares
        if (v[i - 1] > v[i])
        {
            troca(&v[i - 1], &v[i]);
        }
    }
    //Depois de percorrer o vetor, volto a percorrer diminuindo seu tamanho, desconsiderando o último elemento
    bubbleSort(v, n - 1);
}

int main()
{

    int v[5] = {3, 5, 1, 2, 4};


    printf("Vetor Inicial:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor Ordenado:\n");

    bubbleSort(v, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\nVetor Ordenado com Recursão:\n");

    bubbleSortRec(v, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}