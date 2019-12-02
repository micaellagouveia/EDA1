#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*Funcionamento:
1. Percorre o vetor e procura-se o menor elemento.
2. Faz a troca do menor elemento com o primeiro elemento do vetor, ondernando-o
3. Na póxima vez que for percorrer o vetor, o percurso começa de i+1, pois o primeiro elemento já está ordenado.*/

void selection_sort(int *v, int n){
    // achar o menor elemento do vetor e colocar na 1a posição

    for (int i = 0; i< n; i++){
        
        // atribuo o meu menor como o primeiro elemento inicialmente
        int menor = i;

        //começo minha comparação com o próximo elemento
        for(int j = i+1; j< n; j++){

            //procuro o menor elemento do vetor
            if(v[j] < v[menor]){
                menor = j;
            }
        }
        //troco o menor elemento, e coloco o elemento q estava na sua posição
        //conforme vou ordenando o vetor, a minha busca vai se restringindo para os elementos que ainda não foram considerados o menor do vetor
        troca(&v[i], &v[menor]);
    }
}

/*Recursão:
1. Ao analisar o funcionamento, percebemos que depois de percorrer o vetor inteiro, o menor elemento sempre vai para o primeiro lugar
do vetor. Com isso, pode-se criar um recursão, onde procuramos o menor elemento e o alocamos para a primeira posição,
logo após, retornamos a procurar só que com o intervalo diminuído, o nosso vetor começa a ser percorrido na próxima posição.
2. Para isso, se faz necessário passar o index como parâmetro da função, para sempre adicionarmos uma posição.
3. A função para quendo o index for maior que o tamanho do vetor, sinalizando que ele foi n vezes percorrido. */
void selectionSortRec(int *v, int i, int n)
{
    if (i < n)
    {
        int menor = i;
        for (int j = i + 1; j < n; j++)
        {
            //busca do menor elemento do vetor
            if (v[j] < v[menor])
                menor = j;
        }
        // aloca o menor elemento para a primeira posição
        troca(&v[i], &v[menor]);

        //somo 1 no index para restringir a busca na próxima iteração
        selectionSortRec(v, i + 1, n);
    }
}

int main()
{

    int v[5] = {3, 5, 1, 2, 4};

    printf("Vetor Inicial: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor Ordenado:\n");

    selection_sort(v, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor Ordenado com Recursão: \n");

    selectionSortRec(v, 0, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
